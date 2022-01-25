#include <stdio.h>
#include <stdlib.h>
void x(char *,char *);
int main()
{
    char p[30],q[30];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",p);
    fflush(stdin);
    x(p,q);
    printf("String after copying - %s",q);
    return 0;
}
void x(char *p,char *q)
{
    int i=0;
    while(*(p+i)!='\0')
    {
        *(i+q)=*(i+p);
        i++;
    }
}
