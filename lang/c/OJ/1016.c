#include<stdio.h>

int main()
{
    int num1,den1,num2,den2;
    double num3,den3;
    scanf("%d %d %d %d",&num1,&den1,&num2,&den2);

    num3=num1*den2+num2*den1;
    den3=den1*den2;

    printf("%.4f",num3/den3);

    return 0;
}