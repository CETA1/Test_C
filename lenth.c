#include <stdio.h>
//#include <string.h>
// int my_strlen(char* str)
// {
//     int count =0;
//     while(*str!='\0')
//     {
//         count++;
//         str++;
//     }
//     return count;
// }
int my_strlen(char* str)//递归
{   
    if(*str!='\0')
        return 1+my_strlen(str+1);//没有创建临时变量
    else 
        return 0;

}

int main()//模拟的strlen函数
{
    char arr[]="haha";
    // int len=strlen(arr);
    // printf("%d",len);
    int len = my_strlen(arr);//首元素的地址
    printf("%d\n",len);
    return 0;
}