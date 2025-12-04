#include <stdio.h>
#include <string.h>

void myPrint(char* s)
{
    printf("%s",s);
}

int main(){
    char str [100];
    fgets(str,sizeof(str),stdin);//会读取换行也会被换行结束
    myPrint(str);
}