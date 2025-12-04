#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXSIZE 100
typedef int ElemType;
//定义顺序表
typedef struct
{
    ElemType *data;
    int length;
}seqlist;
//初始化
seqlist *initlist()
{
    seqlist *L = (seqlist*)malloc(sizeof(seqlist));
    L->data = (ElemType*)malloc(sizeof(ElemType) * MAXSIZE);
    L->length = 0;
    return L;
}
//遍历
void listElem(seqlist *L){
    for(int i = 0;i < L->length;i++){
        printf("%d ",L->data[i]);
    }
    printf("\n");
}
//在尾部添加元素
int appendElem(seqlist *L,ElemType e){
    if(L->length>MAXSIZE){
        printf("yiman");
        return 0;
    }
    L->data[L->length] = e;
    L->length++;
    return 1;
}
//删除元素
int deleteElem(seqlist *L,int pos,ElemType *e){
    *e = L->data[pos-1];
    if (pos < L->length)
    {
        for (int i = pos; i < L->length; i++)
        {
            L->data[i-1] = L->data[i];
        }
        
    }
    L->length--;
    return 1;
}
//插入元素
int insertElem(seqlist *L,int pos,ElemType e){
    if (pos <= L->length)
    {
        for(int i = L->length-1;i >= pos-1;i --){
        L->data[i+1] = L->data[i];
    }
    L->data[pos-1] = e;
    L->length++;
    }
    
    return 1;
}
//查找元素
int findElem(seqlist *L,ElemType e){
    for (int i = 0; i < L->length; i++)
    {
        if (L->data[i] == e)
        {
            return i + 1;
        }
        
    }
    return 0;
}

int main(){
    seqlist *list = initlist();
    ElemType delElem;
    appendElem(list,87);
    appendElem(list,91);
    appendElem(list,123);
    appendElem(list,56);
    deleteElem(list,2,&delElem);
    insertElem(list,3,45);
    printf("%d\n",findElem(list,123));
    listElem(list);
}