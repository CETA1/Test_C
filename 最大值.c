#include<stdio.h>
int main()//找一组数中的最大值
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int max=arr[0],i;
    int sz=sizeof(arr)/sizeof(arr[0]);

    for(i=1;i<sz;i++)
    {
        if(arr[i]>max)
        {
        max= arr[i];
        }
    }
    printf("%d",max);
    return 0;

}