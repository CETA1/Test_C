#include <stdio.h>
int main()//计算一个整数二进制在内存中1的个数
{
    int num;
    int i = 0;
    int count =0;
    printf("输入一个整数：\n");
    scanf("%d",&num);
    for(i=0;i<32;i++)
    {
        if((num>>i)&1==1)
        {
            count++;
        }
    }
    printf("1的个数有%d个\n",count);
    /* 
    while(num)//负数有bug
    {
        if(num%2==1)
            count++;
        num = num/2;
    }
    printf("1的个数有%d个\n",count);
    */
    return 0;
}