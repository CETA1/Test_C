#include <stdio.h>
//99乘法表
int main()
{
    int i=1;
    int j=1,sum=0;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d = %-2d ",i,j,sum=i*j);
        }
        printf("\n");
    }   
    return 0;
}