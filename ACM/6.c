#include <stdio.h>

void reverse(int arr[],int start,int end){
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}


int main(){
    int a,b;
    scanf("%d %d",&a,&b);
//输入
    int arr[a];
    for (int  i = 0; i < a; i++)
    {
        scanf("%d",&arr[i]);
    }
//交换
    b = b % a;
    if (b > 0)
    {
        reverse(arr,0,a-1);
        reverse(arr,0,b-1);
        reverse(arr,b,a-1);
    }
    
    

//输出
    for (int i = 0; i < a; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
}