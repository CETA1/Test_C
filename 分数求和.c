#include<stdio.h>//分数求和
// 1/1-1/2+1/3-...+1/100
int main()
{   float i=0;
    double sum=0;
    int flag =1;
    for(int i=1; i<=100;i++)
    {
        sum+=flag*1.0/i;
        flag =- flag;
    }
    printf("%lf\n",sum);

    return 0;
}