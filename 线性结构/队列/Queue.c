#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
typedef int Elemtype;
//队列
typedef struct
{
    Elemtype data[MAXSIZE];
    int front;
    int rear;
}Queue;
//初始化
void initQueue(Queue *q){
    q->front = 0;
    q->rear = 0;
}
//判空
int isEmpty (Queue *Q){
    if (Q->front == Q->rear){
        printf("空的\n");
        return 1;
    }
    else{
        return 0;
    }
}
//判满
int queueFull(Queue *Q){
    if (Q->front > 0)
    {
        int a = Q->front;
        for (int i = Q->front; i <= Q->rear; i++)
        {
            Q->data[i - a] = Q->data[i];
        }
        Q->front = 0;
        Q->rear = Q->rear - a;//rear减去front为元素个数
        return 1;
    }
    else{
        printf("full!");
        return 0;
    }
}
//入队
int equeue(Queue *q,Elemtype e){
    if (q->rear >= MAXSIZE)//rear是最后元素的下一个,front是指向加进来的数
    {
        if (!queueFull(q))
        {
            return 0;
        }
    }
    q->data[q->rear] = e;
    q->rear++;
    return 1;
}
//出队
int dequeue(Queue *q){
    if (q->front == q->rear)
    {
        printf("Empty!");
        return 0;
    }
    Elemtype e = q->data[q->front];
    q->front++;
    return e;
}
