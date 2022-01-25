#include <stdio.h>
int main()
{
    int i=0;
    char *c,*d;
    char a[30],b[30];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",a);
    fflush(stdin);
    c=&a[0];
    d=&b[0];
    while(*(c+i)!='\0')
    {
        *(i+d)=*(i+c);
        i++;
    }
    printf("String after copying - %s",d);
    return 0;
}
