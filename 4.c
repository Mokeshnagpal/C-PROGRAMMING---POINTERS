#include <stdlib.h>
#include <stdio.h>
void s(char *a);
int main()
{
    char c[35];
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",c);
    fflush(stdin);
    s(c);
    return 0;
}
void s(char *a)
{
    int c=0,i=0;
    while(*(a+i)!='\0')
    {
        i++;
        c++;
    }
printf("\nLength of the string - %d",c);

}
