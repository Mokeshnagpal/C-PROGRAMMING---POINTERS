#include <stdio.h>
void reverse(int *);
int main()
{
    int a=0,x=0;
    printf("Input a number -\n");
    scanf("%d",&a);
    x=a;
    reverse(&a);
    if(a==x)
        printf("Number is palindrome ");
    else
        printf("Number is not palindrome ");
    return 0;
}
void reverse(int *p)
{
    int b=0,c=0,r=0;
    b=*p;
    while(b>0)
    {
        c=b%10;
        b=b/10;
        r=r*10+c;
    }
    *p=r;
}
