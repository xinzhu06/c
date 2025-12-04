#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

typedef int ElemType;
//定义顺序表
typedef struct
{
    ElemType *data;
    int length;
}seqlist;
//初始化
seqlist *initlist(int a)
{
    seqlist *L = (seqlist*)malloc(sizeof(seqlist));
    L->data = (ElemType*)malloc(sizeof(ElemType) * a);
    L->length = 0;
    return L;
}
//在尾部添加元素
int appendElem(seqlist *L,ElemType e){

    L->data[L->length] = e;
    L->length++;
    return 1;
}
//素数
int isPrime(int n) {
    if (n < 2) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main (){
    int a,p = 0,q = 0,m = 0;
    scanf("%d",&a);
    seqlist *list = initlist(a);
        for (int i = 1; i <= a; i++)
    {
        if (isPrime(i))
        {
            appendElem(list,i);

        }
    }
    for (int j = 0; j <= list->length; j++)
    {
        
            p = list->data[m];
            q = list->data[j];
          
            if (p + q == a)
            {
                printf("%d = %d + %d\n",a,p,q);
                return 0;
            }
            
          m++;
    }
    
}


