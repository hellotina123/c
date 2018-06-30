#include <stdio.h>
int main()
{ int x,y;
  printf("输入一个x的值:");
  scanf("%d\n",&x);
  if(x<1)
	  y=x;
  else 
	  if(x>=10)  y=3*x-11;
	  else  y=2*x-11;
  printf("y=%d\n",y);
  return(0);
}
