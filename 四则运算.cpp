#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
     int a=0;//a是计数的 
     int b=0;
     int c=0;//c是判断输入题目的数量是否为正数 
     int type;
     char flag;
     int L,R;//两个随机数 
     float result;
     printf("请输入要出的题目数量\n");
     scanf("%d",&b);
     srand(unsigned(time(NULL)));//生成随机数 如果想在一个程序中生成随机数序列，需要至多在生成随机数之前设置一次随机种子 后面直接用rand 
     while(c<b)
     {
         type = rand() % 4;
         L = rand() % 100;
         R = rand() % 100;
         switch(type)
         {
         case 0:
             printf("%d + %d = ?\n", L, R);
             break;
         case 1:
             printf("%d - %d = ?\n", L, R);
             break;
         case 2:
             printf("%d * %d = ?\n", L, R);
             break;
         case 3:
             printf("%d / %d = ?\n", L, R);
             break;
         }
 
         a++;//计算出了多少题 
         while(a>=b)
         {
             printf("一共 %d 题\n",a); 
             printf("继续?[Y/N]\n");
             fflush(stdin);//清除输出buffer 并将缓冲的数据移动到控制台
             scanf("%c",&flag);
            if(flag=='Y'||flag=='y')
             {
                 printf("请输入要出的题目数量\n");
                 scanf("%d",&b);
                 a=0;
                 break;
              }
             printf("谢谢使用！\n");
             fflush(stdin);
             getchar();
             return 0;
         }
     }
 }
