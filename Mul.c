#include <stdio.h>
int fac(int n)//递归的方法
{
    if(n<=1)
        return 1;
    else 
        return n*fac(n-1);

}
int fac1(int n)//循环的方法
{
    int i;
    int ret =1;
    for(i=1;i<n;i++)
    {
        ret=n*i;
    }
    return ret;
}
int main()
{
    int n =0;
    int ret =1;
    printf("请输入想要计算的阶乘");
    scanf("%d",&n);
    ret=fac(n);
    printf("%d\n",ret);
    return 0;
}