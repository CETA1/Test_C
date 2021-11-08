#include<stdio.h>
void print(int arr[],int sz)//遍历
{
    for(int i=0;i<sz;i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
}
void Reverse(int arr[],int sz)//交换两个元素
{
    int left =0;
    int right =sz-1;

   while(left < right)
    {
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    } 
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    int sz =sizeof(arr)/sizeof(arr[0]);
    print(arr,sz);
    Reverse(arr,sz);
    print(arr,sz);

    return 0;

}