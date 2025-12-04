#include<stdio.h>
#include <string.h>
#define SIZE 100

void change(char *str,int len)
{
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] += 32;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] -= 32;
        }
        
    }
    
}


int main(){
    //输入
    char str [SIZE];
    fgets(str,sizeof(str),stdin);
    char *newline = strchr(str, '\n');
    if (newline != NULL) {
        *newline = '\0';
    }
    char *newline1 = strchr(str, '#');
    if (newline1 != NULL) {
        *newline1 = '\0';
    }
    //转换
    int len = sizeof(str);
    change(str,len);
 


    //输出
    puts(str);
}

// void change(char str[],int len)
// {
//     for (int i = 0; i < len; i++)
//     {
//         if (str[i] >= 'A' && str[i] <= 'Z')
//         {
//             str[i] += 26;
//         }
//         if (str[i] >= 'a' && str[i] <= 'z')
//         {
//             str[i] -= 26;
//         }
        
//     }
    
// }