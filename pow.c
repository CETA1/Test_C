#include<stdio.h>
double pow(int n, int k)
{
    if(k<0)
        return (1.0/(pow(n,-k)));
    else if(k==0) 
            return 1;
        else 
            return n*pow(n,k-1);    

}
int main()//函数计算n的k次方
{
    int n;
    int k;
    printf("请输入n和k\n");
    scanf("%d%d", &n,&k);
    double ret=pow(n,k);
    printf("%lf",ret);
    return 0;

}