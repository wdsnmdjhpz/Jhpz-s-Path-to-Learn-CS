#include<stdio.h>

void DtoB(int n)
{
    if(n==0 || n==1)
    {
        printf("%d",n);
        return;
    }
    
    int res[14]={0},top=-1;
    while(n)
    {
        res[++top]=n%2;
        n/=2;
    }

    while(top>=0) 
        printf("%d",res[top--]);
}

int main()
{
    int n;
    scanf("%d",&n);
    DtoB(n);

    return 0;
}