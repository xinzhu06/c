#include<stdio.h>
#include<stdlib.h>
typedef int Elemtype;
//定义
typedef struct node
{
    Elemtype data;
    struct node *prev,*next;
}Node;
//初始
Node *initlist(){
    Node *head = (Node *)malloc(sizeof(Node));
    head->data = 0;
    head->next = NULL;
    head->prev = NULL;
    return head;
}
//头插法
int insertHead(Node*L,Elemtype e){
    Node *p = (Node*)malloc(sizeof(Node));
    p->data = e;
    p->next = L->next;
    p->prev = L;
    if (L->next != NULL)
    {
        L->next->prev = p;
    }
    L->next = p;
    return 1;
}
//尾插法
Node *get_tail(Node *L){
    Node *p = L;
    while (p->next != NULL)
    {
        p = p->next;
    }
    return p;
}
Node *insertTail(Node *L,Elemtype e){
    Node *p = (Node*)malloc(sizeof(Node));
    p->data = e;
    p->next = NULL;
    p->prev = L;
    L->next = p;
    return p;
}
int main(){
    Node *list = initlist();
    Node *tail = get_tail(list);
    tail = insertTail(tail,477);
}