#include <stdio.h>
#include <string.h>
void My_Strcpy(char* dest,char* src)
{
    while (*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = *src;

}
//优化
void My_Strcpy1(char* dest,const char* src)
{
    while (*dest++ = *src++)
    {
        ;
    }

}

int main()
{
    char arr1[]="hhhhhhhhhhhh";
    char arr2[]="eeeeee";
    strcpy(arr1,arr2);
    printf("%s\n",arr1);
    My_Strcpy(arr1,arr2);
    printf("%s\n",arr1);
    My_Strcpy1(arr1,arr2);
    printf("%s\n",arr1);
    return 0;
    
}
