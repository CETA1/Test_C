#include <stdio.h>
void print(int n)//拆分每一位并打印
{
    //printf("本次调用的数是%d \n",n);
    if(n>9)
    {
        print(n/10);
    }
    printf("%d \n",n%10);
  
}
int main()
{

    unsigned int num = 0;
    printf("请输入要按序输出的整数");
    scanf("%d", &num);//1234
    print(num);
    return 0;
}
