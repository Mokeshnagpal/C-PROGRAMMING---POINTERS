#include<stdio.h>

int main()
{
	int n,m,*p,*q;
	printf("enter the numbers\n");
	scanf("%d%d",&n,&m);
	p=&n;
	q=&m;
	*p=*p+*q;
	*q=*p-*q;
	*p=*p-*q;
	printf("n=%d m=%d\n",*p,*q);
	return 0;
}
