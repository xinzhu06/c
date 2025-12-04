#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

#define WIDTH 60
#define HEIGHT 20
#define INITIAL_LENGTH 3

// 方向常量
#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4

// 游戏状态
int gameOver;
int score;

// 蛇和食物位置
int snakeX[100], snakeY[100];
int foodX, foodY;
int direction;
int length;

// 函数声明
void setup();
void draw();
void input();
void logic();
void placeFood();
void hideCursor();
void gotoXY(int x, int y);

int main() {
    setup();
    
    while (!gameOver) {
        draw();
        input();
        logic();
        Sleep(100); // 控制游戏速度
    }
    
    printf("\n游戏结束! 最终得分: %d\n", score);
    return 0;
}

// 初始化游戏
void setup() {
    gameOver = 0;
    score = 0;
    direction = RIGHT;
    length = INITIAL_LENGTH;
    
    // 初始化蛇的位置（水平排列）
    for (int i = 0; i < length; i++) {
        snakeX[i] = WIDTH / 2 - i;
        snakeY[i] = HEIGHT / 2;
    }
    
    // 放置第一个食物
    placeFood();
    
    // 隐藏控制台光标
    hideCursor();
}

// 绘制游戏界面
void draw() {
    system("cls"); // 清屏
    
    // 绘制上边界
    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");
    
    // 绘制游戏区域
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++) {
            // 绘制左边界
            if (x == 0)
                printf("#");
            
            // 绘制蛇头
            if (x == snakeX[0] && y == snakeY[0])
                printf("O");
            // 绘制蛇身
            else if (x == foodX && y == foodY)
                printf("F"); // 食物
            else {
                int isBodyPart = 0;
                for (int k = 1; k < length; k++) {
                    if (x == snakeX[k] && y == snakeY[k]) {
                        printf("o");
                        isBodyPart = 1;
                        break;
                    }
                }
                if (!isBodyPart)
                    printf(" ");
            }
            
            // 绘制右边界
            if (x == WIDTH - 1)
                printf("#");
        }
        printf("\n");
    }
    
    // 绘制下边界
    for (int i = 0; i < WIDTH + 2; i++)
        printf("#");
    printf("\n");
    
    // 显示得分
    printf("得分: %d\n", score);
    printf("使用WASD控制方向，按X退出游戏\n");
}

// 处理键盘输入
void input() {
    if (_kbhit()) {
        switch (_getch()) {
            case 'w':
            case 'W':
                if (direction != DOWN)
                    direction = UP;
                break;
            case 's':
            case 'S':
                if (direction != UP)
                    direction = DOWN;
                break;
            case 'a':
            case 'A':
                if (direction != RIGHT)
                    direction = LEFT;
                break;
            case 'd':
            case 'D':
                if (direction != LEFT)
                    direction = RIGHT;
                break;
            case 'x':
            case 'X':
                gameOver = 1;
                break;
        }
    }
}

// 游戏逻辑
void logic() {
    // 保存蛇尾位置，用于可能的增长
    int prevX = snakeX[length - 1];
    int prevY = snakeY[length - 1];
    
    // 移动蛇身（从尾部开始更新位置）
    for (int i = length - 1; i > 0; i--) {
        snakeX[i] = snakeX[i - 1];
        snakeY[i] = snakeY[i - 1];
    }
    
    // 根据方向移动蛇头
    switch (direction) {
        case UP:
            snakeY[0]--;
            break;
        case DOWN:
            snakeY[0]++;
            break;
        case LEFT:
            snakeX[0]--;
            break;
        case RIGHT:
            snakeX[0]++;
            break;
    }
    
    // 检测是否吃到食物
    if (snakeX[0] == foodX && snakeY[0] == foodY) {
        score += 10;
        placeFood();
        length++;
        
        // 增加蛇的长度
        snakeX[length - 1] = prevX;
        snakeY[length - 1] = prevY;
    }
    
    // 检测是否撞墙
    if (snakeX[0] < 0 || snakeX[0] >= WIDTH || 
        snakeY[0] < 0 || snakeY[0] >= HEIGHT) {
        gameOver = 1;
    }
    
    // 检测是否撞到自己
    for (int i = 1; i < length; i++) {
        if (snakeX[0] == snakeX[i] && snakeY[0] == snakeY[i]) {
            gameOver = 1;
            break;
        }
    }
}

// 随机放置食物
void placeFood() {
    srand(time(NULL));
    
    int validPlacement = 0;
    while (!validPlacement) {
        foodX = rand() % WIDTH;
        foodY = rand() % HEIGHT;
        
        // 确保食物不会出现在蛇身上
        validPlacement = 1;
        for (int i = 0; i < length; i++) {
            if (foodX == snakeX[i] && foodY == snakeY[i]) {
                validPlacement = 0;
                break;
            }
        }
    }
}

// 隐藏控制台光标
void hideCursor() {
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(handle, &cursorInfo);
    cursorInfo.bVisible = 0; // 隐藏光标
    SetConsoleCursorInfo(handle, &cursorInfo);
}

// 移动控制台光标到指定位置
void gotoXY(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}