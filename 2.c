#include<stdio.h>
void sum(int *a,int n)
{
	int i,s=0;
	printf("the sum is\n");
	for(i=0;i<n;i++)
	{
		s=s+*(a+i);
	}

	printf("sum is=%d\n",s);

}
main()
{
	int n,i;
	printf("enter the range of array\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the numbers\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sum(a,n);
}

