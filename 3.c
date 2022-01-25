#include <stdio.h>
void max(int *a,int n);
int main()
{
    int n=0;
    printf("Input the length of the array - \n");
    scanf("%d",&n);
    int a[n];
    printf("Input %d values in the array -\n",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    max(a,n);
    return 0;
}
void max(int *a,int n)
{
    int m=*a;
    for(int i=0;i<n;i++)
    {
        if(m<*(a+i))
            m=*(a+i);
    }
    printf("\nMaximum value in the array - %d",m);
}
