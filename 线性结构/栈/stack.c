#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
typedef int Elemtype;
//定义
typedef struct
{
    Elemtype *data;
    int top;
}Stack;
//初始化
Stack *initlist()
{
    Stack *L = (Stack*)malloc(sizeof(Stack));
    L->data = (Elemtype*)malloc(sizeof(Elemtype) * MAXSIZE);
    L->top = -1;
    return L;
}
//判断是否为空
int isEmpty(Stack *s){
    if(s->top == -1){
        printf("Empty");
        return 1;
    }
    else{
        return 0;
    }
}
//进栈
int push(Stack *s,Elemtype e){
    if(s->top >=MAXSIZE-1){
        printf("full");
        return 0;
    }
    s->top++;
    s->data[s->top] = e;
    return 1;
}
//出栈
int pop(Stack *s,Elemtype *e){
    if(s->top >=MAXSIZE-1){
        printf("full");
        return 0;
    }
    *e = s->data[s->top];
    s->top--;
    return 1;
}