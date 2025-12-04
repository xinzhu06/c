#include<stdio.h>
#include<stdlib.h>
typedef int Elemtype;
//创建
typedef struct QueueNode
{
    Elemtype data;
    struct QueueNode *next;
}QueueNode;
typedef struct
{
    QueueNode *front;//因为要指向这种数据类型所以要定义这种类型的指针
    QueueNode *rear;
}Queue;

//初始化
Queue *initQueue(){
    Queue *q = (Queue*)malloc(sizeof(Queue));
    QueueNode *node = (QueueNode*)malloc (sizeof(QueueNode));
    node->data = 0;
    node->next = NULL;
    q->front = node;
    q->rear = node;
    return q;
}
//入队(与不是链式的队列不同的是rear指向的是有数据的节点)
void equeue(Queue *q,Elemtype e){
    QueueNode *node = (QueueNode*)malloc(sizeof (QueueNode));
    node->data = e;
    node->next = NULL;
    q->rear->next = node;
    q->rear = node;
}
//出队
int dequeue(Queue *q,Elemtype *e){
    QueueNode *node = q->front->next;
    q->front->next = node->next;
    if (q->front == q->rear)
    {
        q->rear = q->front;
    }
    free(node);
    return 1;
}
int main (){
    Queue *q = initQueue();
    
}