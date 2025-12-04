#include <stdio.h>

int main(){
    float x1,y1,x2,y2;
    scanf("%f %f %f %f",&x1,&y1,&x2,&y2);
    printf("addition of complex is %f+%fi\n",x1+x2,y1+y2);
    printf("product of complex is %f+%fi",(x1*x2-y1*y2),(x1*y2+x2*y1));
}