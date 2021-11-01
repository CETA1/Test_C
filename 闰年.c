#include <stdio.h>
int leap_year(int y)
{
    if((y%100!=0 && y%4==0)||y%400==0)
        return 1;
    else 
        return 0;    

}
int main()//函数判断闰年
{
    int year=0;
    for(year=1000;year<=2000;year++)
    {
        if(leap_year(year)==1)
        {
            printf("%d\n",year);
        }
    }
    return 0;
}