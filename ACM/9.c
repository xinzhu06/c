#include <stdio.h>

int search(int list[],int len,int e){
    for (int  i = 0; i < len; i++)
    {
        if (e == list[i])
        {
            return i;
        }
        
    }
    return -1;
}

int main(){
    int repeat;
    scanf("%d",&repeat);

    
    while (repeat)
    {
        int len;
        scanf("%d",&len);
        int list[len];
        for (int i = 0; i < len; i++)
        {
            scanf("%d",&list[i]);
        }
        int x ;
        scanf("%d",&x);
        if(search(list,len,x) < 0){
            printf("Not found\n");
        }else{
            printf("index = %d\n",search(list,len,x));
        }

        

        repeat--;

    }
    
}