#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main()
{
     int a=0;//a�Ǽ����� 
     int b=0;
     int c=0;//c���ж�������Ŀ�������Ƿ�Ϊ���� 
     int type;
     char flag;
     int L,R;//��������� 
     float result;
     printf("������Ҫ������Ŀ����\n");
     scanf("%d",&b);
     srand(unsigned(time(NULL)));//��������� �������һ��������������������У���Ҫ���������������֮ǰ����һ��������� ����ֱ����rand 
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
 
         a++;//������˶����� 
         while(a>=b)
         {
             printf("һ�� %d ��\n",a); 
             printf("����?[Y/N]\n");
             fflush(stdin);//������buffer ��������������ƶ�������̨
             scanf("%c",&flag);
            if(flag=='Y'||flag=='y')
             {
                 printf("������Ҫ������Ŀ����\n");
                 scanf("%d",&b);
                 a=0;
                 break;
              }
             printf("ллʹ�ã�\n");
             fflush(stdin);
             getchar();
             return 0;
         }
     }
 }
