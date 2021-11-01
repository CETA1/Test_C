#include<stdio.h>
// 1 1 2 3 5 8 13 21.....
int Fib(int n)//递归的方法求斐波那契数列
{
    if(n<=2)
        return 1;
    else 
        return Fib(n-1)+Fib(n-2);
}
int Fib1(int n)//循环的方法求斐波那契数
{
    int f1=1;
    int f2=1;
    int f3=1;

    while(n>2)
    {
        f3=f1+f2;
        f1=f2;
        f2=f3;
        n--;
    }
    return f3;

}
int main()//斐波那契数列
{
    int i=0;
    int ret=0;
    printf("请输入你想求第几个斐波那契数");
    scanf("%d",&i);
    ret = Fib1(i);
    printf("%d\n",ret);
    return 0;
}