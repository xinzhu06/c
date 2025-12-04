#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 100
typedef int Elemtype;
//定义加初始化
typedef struct q
{
    Elemtype *data;
    int front;
    int rear;
}Queue;
Queue *initQueue(){
    Queue *q = (Queue*)malloc(sizeof(Queue));
    q->data = (Elemtype*)malloc(sizeof(Elemtype)*MAXSIZE);
    q->front = 0;
    q->rear = 0;
    return q;
}
//出队
int dequeue(Queue *Q,Elemtype *e){
    if (Q->front == Q->rear)
    {
        printf("Empty");
        return 0;
    }
    *e = Q->data[Q->front];
    Q->front = (Q->front + 1 ) % MAXSIZE;
    return 1;
}
//入队
int equeue(Queue *Q,Elemtype e){
    if ((Q->rear + 1 ) % MAXSIZE == Q->front)
    {
        printf("full");
        return 0;
    }
    Q->data[Q->rear] = e;
    Q->rear = (Q->rear + 1 ) % MAXSIZE;
    return 1;
}

int gethead(Queue *Q,Elemtype *e){
    if (Q->front == Q->rear)
    {
        printf("Empty");
        return 0;
    }
    *e = Q->data[Q->front];
    return 1;
}
int main (){
    Queue *q = initQueue();
    equeue(q,12);
    equeue(q,54);
    Elemtype e;
    gethead(q,&e);
    printf("%d",e);
    dequeue(q,&e);
    dequeue(q,&e);
    printf("%d",e);
}