#include <stdio.h>
void prime(int *);
int main()
{
    int a[5];
    printf("Input 5 numbers continuously -\n");
    for(int i=0;i<5;i++)
    scanf("%d",&a[i]);
    prime(&a[0]);
    return 0;
}
void prime(int *x)
{
    printf("Numbers which are prime are -\n");
    int i=0,m=0;
    while(i<5)
    {
        for(int j=2;j<*(x+i);j++)
        {
            if(*(x+i)%j==0)
               m=1;
        }
        if(m==0)
            printf("%d\n",*(x+i));
        m=0;
        i++;
    }
}
