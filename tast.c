//#include<stdio.h>


/*int main() {
    int m, n, sum = 0;
    
    // 输入m和n的值
    printf("请输入正整数m和n\n");
    scanf("%d %d", &m, &n);
    
    // 验证输入合法性
    if (m < 0 || n > 300 || m > n) {
        printf("输入不合法!请确保0 ≤ m ≤ n ≤ 300\n");
        return 1;
    }
    
    // 确保从奇数开始
    if (m % 2 == 0) {
        m = m + 1; // 如果m是偶数，从m+1开始
    }
    
    // 计算奇数和
    for (int i = m; i <= n; i += 2) {
        sum += i;
    }
    
    // 输出结果
    printf("%d到%d之间的所有奇数的和为:%d\n", m, n, sum);
}*/
// #include <stdio.h>

//  int main() {

    // int a = 1,b = 56,c;
    // c = b % a;
    // printf("%d",c);
    // int m = 0, n = 0,min = 0;
    
    // scanf("%d %d",&m,&n);
    // min = (m < n)?m : n;
    // printf("%d\n",min);
    // for(int i = 1;i <= min;i ++){
    //      if(m % i == 0 && n % i == 0){
    //         printf("%d",i);
    //          return i;
    //      }

         
    // } 

//     int n;
    
//     // 输入数组长度
    
//     scanf("%d", &n);
    
//     int arr[n];
    
//     // 输入数组元素
//     printf("pleas input %d :\n", n);
//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
    
//     // 寻找最小值的索引
//     int min_index = 0;
//     for(int i = 1; i < n; i++) {
//         if(arr[i] < arr[min_index]) {
//             min_index = i;
//         }
//     }
    
//     // 将最小值与第一个数交换
//     if(min_index != 0) {
//         int temp = arr[0];
//         arr[0] = arr[min_index];
//         arr[min_index] = temp;
//     }
    
//     // 输出交换后的数组
  
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
    
//     return 0;
// }
// #include <stdio.h>
// int main(){
//   float a = 0 ,b = 0,c = 0;
//   scanf("%f %f",&a,&b);
//   if(a >= b){
//     c = a*b;
//     printf("%.0f",c);
//   }
//   if(a < b){
//     c = a/b;
//     printf("%.2f",c);
//   }  
// }
// #include <stdio.h>
//  int main(){
//   int a = 0;
//   scanf("%d",&a);
//   if(a >= 90){
//     printf("A");
//   }
//   else if(a >= 80){
//     printf("B");
//   }
//   else if(a >= 70){
//     printf("C");
//   }
//   else if(a >= 60){
//     printf("D");
//   }
//   else{
//     printf("E");
//   }
//  }
// #include <stdio.h>
//   int main(){//练习
//     int a = 0,b =0;
//     int arr[10] = {};
//     printf("input(100~200):");
//     for (int i = 0;i < 10;i++){
//         scanf("%d",&arr[i]);
//     }
//     printf("input(100~120):");
//     scanf("%d",&a);
//     for(int i = 0;i < 10;i++){
//         if(arr[i] <= a){
//             b++;
//         }
//     }
//     printf("%d",b);
//   }
/*#include<stdio.h>//第24题
    int Fibonacci (int a,int b,int m ){
        int c;
        for(int i = 2;i < m;i++){
            c = a+b;
            a = b;
            b = c;
        }
       return c;
    }
int main(){
    float b ,c,sum = 0;
    for(int i = 3;i <= 20;i ++){
        b = Fibonacci(2,3,i);
        c = Fibonacci(1,2,i);
        sum = sum + b / c;
    }
    printf("%.2f",sum+3.5);
}    */
// #include <stdio.h>//    求阶乘
// int main(){
//     int a = 1,num = 0,b = 0;
//     scanf("%d",&b);
//     for(int i = 1 ;i <= b;i ++){
//         a = a * i;
//         num += a;
//     }
//     printf("%d",num);
// }
/*#include <stdio.h>//约瑟夫环
int main(){
    int a,b,num = 0,di = 0;
    int temp;
    //输入
    printf("please input all people:");
    scanf("%d",&a);
    printf("please input count number:");
    scanf("%d",&b);
    temp = a;
    //储存
    int arr [a - 1];
    for(int i = 0;i <a;i++){
        arr[i] = 1;
    }
    //逻辑
    while (a > 1)
    {
        num ++;
        di ++;
        if(di > temp){
            di = 1;
        }
        if(arr[di-1] == 0){
            num --;
        }
        if(num == b){
            if(arr[di-1] == 0){
                num--;
            }
            else{
                arr[di-1] = 0;
                num = 0;
                a --;
            }
        }
    }
    //输出
    for(int j = 0;j < temp;j ++){
        printf("%d  ",arr[j]);
    }
}*/

// #include<stdio.h>

// int main(){
//     int count;

//     printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");

//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d",&count);
//         if(count == 0){
//             break;
//         }
//         switch (count)
//         {
//         case 1:
//             printf("price = 3.00\n");
//             break;
//         case 2:
//             printf("price = 2.50\n");
//             break;
//         case 3:
//             printf("price = 4.10\n");
//             break;
//         case 4:
//             printf("price = 10.20\n");
//             break;
//         case 0:
//             break;
        
//         default:
//             printf("price = 0.00\n");
//             break;
//         }
//     }
// }
// #include<stdio.h>
// int main(){
//   int n;
//   scanf("%d",&n);
//   for(int i = 1;i <= n;i++){
//     for(int j = 1;j <=n - i;j++){
//       printf(" ");
//     }
//     for(int j = 1;j <= 2*i-1;j++){
//       printf("*");
//     }
//     printf("\n");
//   }
   
//     for(int i = n-1;i >= 1;i--){
//     for(int j = 1;j <=n - i;j++){
//       printf(" ");
//     }
//     for(int j = 1;j <= 2*i-1;j++){
//       printf("*");
//     }
//     printf("\n");
//   }
// }
// #include<stdio.h>
// int main(){
//   int a,b;
//   char c = 65;
//   scanf("%d %d",&a,&b);
//     for(int i = 1;i <= a;i++){
//       for(int j =0;j < b;j++){
//         printf("%c",c);
//         c++;
//       }
//       c= 65+i;
//       printf("\n");
//     }
  
// }
// #include<stdio.h>
// #include<math.h>
// #define PI  3.1415926
// int main (){
//     int num;
//     scanf("%d",&num);
//     int arr[num];
//     for(int i = 0 ;i < num;i++){
//         scanf("%d",&arr[i]);
//     }
//     for (int j = 0; j < num; j++)
//     {
//         printf("%f",sin((float)arr[j] * PI / 180));
//         printf("\n");
//     }
// }

// #include <stdio.h>

// #define PI 3.1415926
// #define EPS 1e-6

// int main() {
//     int T;
//     scanf("%d", &T);
    
//     while (T--) {
//         int y;
//         scanf("%d", &y);
        
//         double x = y * PI / 180.0;  // 转为弧度
        
//         double term = x;      // 第一项是 x
//         double sum = term;
//         int n = 1;
        
//         // 泰勒展开
//         while (1) {
//             term = -term * x * x / ((2 * n) * (2 * n + 1));
//             if (term > -EPS && term < EPS) {
//                 break;
//             }
//             sum += term;
//             n++;
//         }
        
//         printf("%.6f\n", sum);
//     }
    
//  

// }

// #include <stdio.h>//反转字符串
// #include <string.h>
// int main() {
//     char a[100];
//     fgets(a,sizeof(a),stdin);
//     int len = strlen(a);
//     if (len > 0 && a[len - 1]=='\n')
//     {
//         a[len-1] = '\0';
//         len--;
//     }
//     for (int i = len - 1; i >= 0; i--) {
//         printf("%c", a[i]);
//     }
//     printf("\n");
    
//     return 0;
// }

// #include <stdio.h>

// float max(float a,float b,float c){
//     float d,e,f;
//     d = (a > b)?a:b;
//     e = (a > c)?a:c;
//     f = (d > e)?d:e;
//     return f;
// }

// int main() {
//     int n;
//     float temp1 ,temp2;
//     int count = 0;
//     scanf("%d", &n);
//     for (int i = 1; i <= n; i++)
//     {
//         float a,b,c;
//         scanf("%f %f %f",&a,&b,&c);
        
//         temp1 = max(a,b,c);
//         if (temp1 > temp2)
//         {
//             temp2 = temp1;
//             count = i;
//         }
        
//     }
//     printf("%d ",count);
//     printf("%.2f",temp2);
//     return 0;
// }

// #include <stdio.h>
// #include <string.h>//c语言中不能直接用string定义字符串

// int main(){
//     char str = "hello";
//     //fgets(ch,sizeof(ch),stdin);
    
//     printf("%s",str);
//     // puts() 会自动在末尾添加换行符
//     puts("Hello, World!");
        
//     // fputs() 不会自动添加换行符
//     fputs(str, stdout);
//     fputs("\n", stdout);
// //     需要格式化输出时用 printf

// // 简单输出并自动换行时用 puts

// // 需要控制输出位置时用 fputs

// // 需要逐个字符处理时用 putchar
// }

#include <stdio.h>
#include <string.h>


void gseg(int arr){
    printf("%d",arr);
}
int main(){
    // char str[100];
    // fgets(str,sizeof(str),stdin);//会读取回车
    //     char *newline = strchr(str, '\n');
    // if (newline != NULL) {
    //     *newline = '\0';  // 将换行符替换为字符串结束符
    // }
    // puts(str);
    int arr[10] = {1,2};
    gseg(arr);
}


//总结：输入用fgets,scanf,getchar
//输出用puts,printf,putchar,fputs

#include <stdio.h>




int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    
}
#include <stdio.h>


// 求最大公约数的函数
// int gcd(int a, int b) {
//     int temp;
//     while (b != 0) {
//         temp = a % b;
//         a = b;
//         b = temp;
//     }
//     return a;
// }

// int main() {
//     int a, b;
//     scanf("%d %d", &a, &b);
//     printf("gcd=%d\n", gcd(a, b));
//     return 0;
// }

int isPrime(int a){
    if(a == 1)return 0;
    if(a % 2 == 0)return 0;
    if(a == 2)return 1;
    for (int i = 3; i < sqrt(a); i+=2)
    {
        if(a%i == 0){
            return 0;
        }
        
    }
    return 1;
}

int Yes(int i){
    int a = i;
    int c = 0;
    while (a>0)
    {
        int b = a%10;
        
      if (b != 2 && b != 3 && b != 5 && b != 7) {
            return 0;  // 如果有一位数字不是素数，直接返回0
        }
        
        a = a/10;
        c+=b;
    }

    return isPrime(c);
    
}

int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int sum = 0;
    for(int i = a;i <= b;i++){
        if(Yes(i)){
            sum+=i;
        }
    }
    printf("%d",sum);
}