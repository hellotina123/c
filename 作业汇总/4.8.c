#include<stdio.h>
int main()
{
float a;
char b;
printf("������ɼ���");
scanf("%f",&a);

while(a<0||a>100)
{
printf("����ɼ���������������\n");
scanf("%f",&a);
}

 switch((int)(a/10))
{
case 10:
case 9: printf("�ɼ��ȼ�ΪA\n"); break;
case 8: printf("�ɼ��ȼ�ΪB\n"); break;
case 7: printf("�ɼ��ȼ�ΪC\n"); break;
case 6: printf("�ɼ��ȼ�ΪD\n"); break;
case 5:
case 4:
case 3:
case 2:
case 1:
case 0: printf("�ɼ��ȼ�ΪE\n");
}
return 0;
}










