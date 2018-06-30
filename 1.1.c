#include<stdio.h>
#define pi 3.1415926
int main()
{
	float r,s;
	printf("pi=3.1415926,请输入圆的半径:");
	scanf("%f",&r);
	s=pi*r*r;
	printf("圆的面积为：%f\n",s);
	return 0;
}
