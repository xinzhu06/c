#include<stdio.h>
#include<stdlib.h>
typedef char ElemType;

typedef struct TreeNode
{
    ElemType data;
    TreeNode *lchild;
    TreeNode *rchild;
}TreeNode;

typedef TreeNode *BiTree;

void preOder(BiTree T){
    if (T == NULL)
    {
        return;
    }
    printf("%c",T->data);

}