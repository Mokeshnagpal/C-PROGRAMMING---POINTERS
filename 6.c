#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i=0,j=0;
    char *c,*d;
    char a[30],b[30];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",a);
    fflush(stdin);
    printf("Input another string -\n");
    fflush(stdin);
    scanf("%[^\n]",b);
    fflush(stdin);
    c=&a[0];
    d=&b[0];
    while(*(c+i)!='\0')
    {
        i++;
    }
    *(c+i)=' ';
    while(*(d+j)!='\0')
    {
        i++;
        *(c+i)=*(d+j);
        j++;
    }
    printf("String after concatination - %s",c);
    return 0;
}
