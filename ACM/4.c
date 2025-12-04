#include <stdio.h>

void pyramid( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    pyramid(n);
    
    return 0;
}

void pyramid(int n){
    for(int k = 1;k <= n;k++){
        for(int i = 0;i < n-k;i++){
            printf(" ");
        }
        for (int j = 1; j <= k; j++)
        {
            printf("%d ",k);
        }
        printf("\n");
}

    
}