#include<stdio.h>
void MUL1(int a)
{
    int i=0;
    for (int i = 1; i <=a; i++)//行
    {
        int j = 0;
        for (int j = 1; j <= i; j++)//列
        {
            printf("%d*%d=%-2d ", j ,i, i*j);
        }
        printf("\n");
    }

}

int main()
{
    int a;
    printf("请输入你想求的乘法表");
    scanf("%d", &a);
    MUL1(a);

    return 0;
}