#include <stdio.h>
#include <assert.h>
int My_Strlen(const  char *arr)
{   
    assert(arr != NULL);//保证指针有效性
    int count = 0;
    while (*arr !='\0') 
    {
        count++;
        arr++;
    }
    return count;

}
int main()
{
    char arr[]={"asdfghjk"};
    int ret=My_Strlen(arr);
    printf("%d\n",ret);
    return 0;
}