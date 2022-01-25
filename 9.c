#include <stdio.h>
int main()
{
    double a[10];
    printf("Input 10 temperatures in fareheneit =\n");
    for(int i=0;i<10;i++)
    {
        scanf("%lf",&a[i]);
    }
    double *x=&a[0];
    printf("New temperature in celcius -\n");
    for(int i=0;i<10;i++)
    {
        *(x+i)=(5*(*(x+i)-32))/9;
        printf("%0.2lf\n",*(x+i));
    }
    return 0;
}
