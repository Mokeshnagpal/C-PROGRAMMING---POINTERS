#include <stdio.h>
int main()
{
    int i=0;
    char a[50],b[50],d;
    printf("Input a string -\n");
    fflush(stdin);
    scanf("%[^\n]",a);
    fflush(stdin);
    char *c;
    c=&a[0];
    while(*(c+i)!='\0')
    {
        i++;
    }
    for(int j=0;j<i-1;j++)
    {
        for(int k=0;k<i-j-1;k++)
        {
            if((int)*(c+k)>(int)*(c+k+1))
            {
                d=*(c+k);
                *(c+k)=*(c+k+1);
                *(c+1+k)=d;
            }
        }
    }
    printf("Rearranged string - %s",c);
    return 0;
}
