#include<stdio.h>

int main()
{

    int a;
    scanf("%d",&a);

    int triangle[10][10] = {0};
    for (int i = 0; i < a; i++) {
    for (int j = 0; j <= i; j++) {
        if (j == 0 || j == i) {
            triangle[i][j] = 1;
        } else {
            triangle[i][j] = triangle[i-1][j-1] + triangle[i-1][j];
        }
    }
}


    for (int i = 0; i < a; i++)
    {
        for (int  j = 0; j < a-1-i; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < i+1; k++)
        {
            printf("%4d",triangle[i][k]);
        }
        
        
        printf("\n");
    }
    

}