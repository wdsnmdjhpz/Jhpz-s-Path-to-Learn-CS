#include<stdio.h>

int num=0;

void Kakeya(int x)
{
    if(x==1) return;

    else 
    {
        num++;

        if(x%2==1) Kakeya((3*x+1)/2);

        else Kakeya(x/2);
    }
}

int main()
{
    int x;
    while(scanf("%d",&x)!=EOF)
    {
        num=0;
        Kakeya(x);
        printf("%d\n",num);
    }

    return 0;
}