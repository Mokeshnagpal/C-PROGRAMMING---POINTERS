#include <stdio.h>
void spltwodigitno(int *);
int main()
{
    int a=0;
    printf("Input a number to check for special 2 digit number -\n");
    scanf("%d",&a);
    spltwodigitno(&a);
    if(a==1)
        printf("Number is a special two digit number");
    else
        printf("Number is not a special two digit number");
    return 0;
}
void spltwodigitno(int *p)
{
    int b=*p,c=0,s=0,m=1;
    while(b>0)
    {
        c=b%10;
        b=b/10;
        s+=c;
        m*=c;
    }
    s+=m;
    if(s==*p)
        *p=1;
}
