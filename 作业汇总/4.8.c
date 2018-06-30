#include<stdio.h>
int main()
{
float a;
char b;
printf("请输入成绩：");
scanf("%f",&a);

while(a<0||a>100)
{
printf("输入成绩有误，请重新输入\n");
scanf("%f",&a);
}

 switch((int)(a/10))
{
case 10:
case 9: printf("成绩等级为A\n"); break;
case 8: printf("成绩等级为B\n"); break;
case 7: printf("成绩等级为C\n"); break;
case 6: printf("成绩等级为D\n"); break;
case 5:
case 4:
case 3:
case 2:
case 1:
case 0: printf("成绩等级为E\n");
}
return 0;
}










