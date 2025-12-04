#include <stdio.h>
// #include <string.h>

// int main(){
//     int a;
//     int b;
//     int sum = 0;
//     float max = 0;
//     float min;
//     scanf("%d",&a);
//     for (int i = 0; i < a; i++)
//     {
//         b = 0;
//         scanf("%d",&b);
//         min = b;
//         if (b > max)
//         {
//             max = b;
//         }
//         if (b < min)
//         {
//             min = b;
//         }
        
//         sum += b;
//     }
//     float average = (double)sum / a;
//     printf("average = %.2f\n",average);
//     printf("max = %.2f\n",max);
//     printf("min = %.2f\n",min);
// }

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float *scores;
    float sum = 0, max, min, average;
    
    // 读取学生个数
    scanf("%d", &n);
    
    // 动态分配内存
    scores = (float*)malloc(n * sizeof(float));
    if (scores == NULL) {
        printf("内存分配失败\n");
        return 1;
    }
    
    // 读取成绩
    for (int i = 0; i < n; i++) {
        scanf("%f", &scores[i]);
    }
    
    // 初始化最大值和最小值
    max = scores[0];
    min = scores[0];
    
    // 计算总和、最大值和最小值
    for (int i = 0; i < n; i++) {
        sum += scores[i];
        
        if (scores[i] > max) {
            max = scores[i];
        }
        
        if (scores[i] < min) {
            min = scores[i];
        }
    }
    
    // 计算平均分
    average = sum / n;
    
    // 输出结果，保留两位小数
    printf("average = %.2f\n", average);
    printf("max = %.2f\n", max);
    printf("min = %.2f\n", min);
    
    // 释放动态分配的内存
    free(scores);
    
    return 0;
}