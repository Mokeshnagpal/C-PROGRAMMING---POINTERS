#include <stdio.h>
int main()
{
    int l=0,t=0;
    printf("Input the length of the array -\n");
    scanf("%d",&l);
    int a[l];
    printf("Input %d numbers continuously -\n",l);
    for(int i=0;i<l;i++)
        scanf("%d",&a[i]);
    int *x;
    x=&a[0];
    for(int i=0;i<l-1;i++)
    {
        for(int j=0;j<l-i-1;j++)
        {
            if(*(x+j)>*(x+j+1))
            {
                t=*(x+j);
                *(x+j)=*(x+j+1);
                *(x+j+1)=t;
            }
        }
    }
    printf("Rearranged array -\n");
    for(int i=0;i<l;i++)
    printf("%d\t",*(x+i));
    return 0;
}
