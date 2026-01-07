#include<stdio.h>

int GCD(int x,int y)
{
    int min=(x<y?x:y),half=min/2,gcd=1;

    for(int i=1;i<=half;i++)
        if(x%i==0 && y%i==0)
            gcd=i;

    if((x>y?x:y)%(min)==0) gcd=min;

    return gcd;
}

int GCD(int x,int y)
{
    while(y)
    {
        int temp=y;
        y=x%y;
        x=temp;
    }

    return x;
}

int main()
{
    int n,x,y;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        printf("%d\n",GCD(x,y));
    }

    return 0;
}