#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <conio.h>
#include <time.h>

#define WIDTH 120
#define HEIGHT 25

void draw();

int main (){
    int GameOver = 0;
    while (GameOver != 10)
    {
        draw();
        GameOver++;
    }
    

    
    return  0;

}

void draw(){
    //清屏
    system("cls");
        //边框
    for (int i = 0;i < WIDTH ;i++){
        printf("#");
    }
    printf("\n");
    for (int i = 0; i < HEIGHT; i++)
    {
        printf("#");
        for (int i = 0; i < WIDTH-2; i++)
        {
            printf(" ");
        } 
        printf("#");
        printf("\n");
    }
        for (int i = 0;i < WIDTH ;i++){
        printf("#");
    }
}




/*

11				11		1111111111111111111		11				 		11				 		111111111111111111
11				11		11						11				 		11				 		11				11
11				11		11						11				 		11				 		11				11
11				11		11						11				 		11				 		11				11
111111111111111111		1111111111111111111		11				 		11				 		11				11
11				11		11						11				 		11				 		11				11
11				11		11						11				 		11				 		11				11
11				11		11						11				 		11				 		11				11
11				11		1111111111111111111		11111111111111111		11111111111111111		111111111111111111
*/