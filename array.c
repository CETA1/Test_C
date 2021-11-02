#include<stdio.h>
//冒泡排序算法思想
void bubule_sort(int arr[],int sz)
{
    //排序的趟数（数组的元素个数减一）
    int i=0;
    int flag=1;//标志变量假设有序
    for(i=0;i<sz-1;i++)
    {
        int j=0;
        for(j=0;j<sz-1-i;j++)
        {
            //每一趟排序的次数  次数是趟数减一再减一
            if(arr[j] > arr[j+1])
            {
                int tmp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=tmp;
                flag=0;
            }

        }
        if(flag==1)
        {
            break;
        }

    }

}
int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1,0};
    //升序
    int i=0;
    int sz;
    sz=sizeof(arr)/sizeof(arr[0]);
    //sizeof(数组名) ：计算的是整个数组的大小，单位是字节
    //&数组名-----数组名代表整个数组，取出的是整个数组的地址
    bubule_sort(arr,sz);
    for(int i=0; i<sz; i++)
    {
        printf("%d ",arr[i]);

    }
    printf("\n");
    printf("*p\n",arr);//数组的首元素地址
    printf("*p\n",&arr[0]);//数组的首元素地址
    printf("*p\n",&arr);//数组的地址
    return 0;
}