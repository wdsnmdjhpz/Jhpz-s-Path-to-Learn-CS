#include<stdio.h>

int reverse(int x)
{
    int res=0;

    while(x!=0)
    {
        res=10*res+x%10;
        x/=10;
    }

    return res;
}

int main()
{
    int x;
    scanf("%d",&x);
    char* res=(x==reverse(x))?"yes":"no";
    printf("%s",res);

    return 0;
}