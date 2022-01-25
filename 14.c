#include <stdio.h>
void BUZZ(int *);
int main()
{
    int a=0;
    printf("Input a number to check for special 2 digit number -\n");
    scanf("%d",&a);
    BUZZ(&a);
    if(a==1)
        printf("Number is a buzz number");
    else
        printf("Number is not a buzz number");
    return 0;
}
void BUZZ(int *p)
{
    if(*p%10==7||*p%7==0)
        *p=1;
}
