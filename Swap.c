#include <stdio.h>
//交换两个长度一样数组的内容并输出
void print(int arr[],int sz)
{
    for(int i = 0; i < sz; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");

}
int main()
{
    int arr1[]={1,2,3,4,5};
    int arr2[]={6,7,8,9,10};
    int sz = sizeof(arr1)/sizeof(arr1[0]);
    int tem =0;
    for(int i=0; i<sz; i++)
    {
        tem = arr1[i];
        arr1[i]=arr2[i];
        arr2[i]=tem;   
    }
    print(arr1,sz);
    print(arr2,sz);
    return 0;
}