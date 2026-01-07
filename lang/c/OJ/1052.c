#include<stdio.h>

int main()
{
    int year,month;
    int nums[13]={29,31,28,31,30,31,30,31,31,30,31,30,31};
    scanf("%d %d",&year,&month);

    if(month!=2) printf("%d",nums[month]);
    else if((year%4==0 && year%100!=0) || year%400==0) printf("%d",nums[0]);
    else printf("%d",nums[2]);

    return 0;
}