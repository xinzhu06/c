#include <stdio.h>//删除指定字符
#include <string.h>

void delchar(char *str, char c) {
    char *read_ptr = str; 
    char *write_ptr = str;
    
    while (*read_ptr != '\0') {
        if (*read_ptr != c) {
            *write_ptr = *read_ptr;
            write_ptr++;
        }
        read_ptr++;
    }
    
    *write_ptr = '\0';
}

int main() {
    int repeat;
    char str[100];
    char c;
    
    // 输入重复次数
    scanf("%d", &repeat);
    getchar(); 
    
    for (int i = 0; i < repeat; i++) {
        fgets(str, sizeof(str), stdin);
        
        if (str[strlen(str) - 1] == '\n') {
            str[strlen(str) - 1] = '\0';
        }
        
        scanf("%c", &c);
        getchar(); 
        
        delchar(str, c);
        
        printf("result: %s\n", str);
    }
    
    return 0;
}