#include<stdio.h>
#include<stdlib.h>
typedef int Elemtype;
//定义链表
typedef struct node
{
    Elemtype date;
    struct node *next;  
}Node;
//初始化
Node *initlist(){
    Node *head = (Node*)malloc(sizeof(Node));
    head->date = 0;
    head->next = NULL;
    return head;
}
//头插法
int insertHead(Node *L,Elemtype e){
    Node *p = (Node*)malloc(sizeof(Node));
    p->date = e;
    p->next = L->next;
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
Node *inserttail(Node *tail,Elemtype e){
    Node *p = (Node *)malloc(sizeof(Node));
    p->date = e;
    tail ->next = p;
    p->next = NULL;
    return p;
}
//遍历
void listNode(Node *L){
    Node *p = L->next;
    while (p != NULL)
    {
        printf("%d  ",p->date);
        p = p->next;
    }
    printf("\n");
}
//在指定位置插入元素
int insertNode(Node *L,int pos ,Elemtype e){
    Node *p = L;
    int i = 0;
    while (i < pos-1)
    {
        p = p->next;
        i++;
        if(p == NULL){
            return 0 ;
        }
    }
    Node *q = (Node*)malloc(sizeof(Node));
    q->date = e;
    q->next = p->next;
    p->next = q;
    return 1;
}
//删除指定位置节点
int deleteNode(Node *L,int pos){
    Node *p = L;
    int i = 0;
    while (i < pos-1)
    {
        p = p->next;
        i++;
        if(p == NULL){
            return 0;
        }
    }
    if(p->next == NULL){
        printf("input error!");
    }
    Node*q = p->next;
    p->next = q->next;
    free(q);
    return 1;
}
//获取链表长度
int listlength(Node *L){
    Node *p = L;
    int len = 0;
    while (p->next != NULL)
    {
        p = p->next;
        len++;
    }
    return len;
}

void freelist(Node*L){
    Node *p = L->next;
    Node *q;
    while (p != NULL)
    {
        q = p->next;
        free(p);
        p = q;
    }
    L->next = NULL;
}
//反转链表
Node *reverseList(Node *head){
    Node *first = NULL;
    Node *second = head->next;
    Node *third ;
    while (second != NULL)
    {
        third = second->next;
        second->next = first;
        first = second;
        second = third;
    }
    Node *hd = initlist();
    hd->next = first;
    return hd;
}
//删除中间节点（偶数删除靠后的节点）
int delmiddnode(Node *L){
    Node *fast = L->next;
    Node *slow = L;
    while (fast != NULL && fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
    }
    Node *p = slow->next;
    slow->next = p->next;
    free(p);
    return 1;
}
int main(){
    Node *list = initlist();
    insertHead(list,13);
    insertHead(list,45);
    insertHead(list,78);
    insertNode(list,3,91);
    Node *tail;
    tail = get_tail(list);
    tail = inserttail(tail,100);
    deleteNode(list,3);
    list = reverseList(list);
    delmiddnode(list);
    listNode(list);
    printf("%d",listlength(list));
}