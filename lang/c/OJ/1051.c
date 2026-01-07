#include<stdio.h>

int isPrime(int num)
{
    if(num==2) return 1;
    if(num<2 || num%2==0) return 0; 

    for(int i=3;i*i<=num;i+=2)
        if(num%i==0)
            return 0;

    return 1;
}

int reverse(int num)
{
    int res=0;
    while(num)
    {
        res=10*res+num%10;
        num/=10;
    }

    return res;
}

int main()
{
    int n,num,res;
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {    
        scanf("%d",&num);
        res=(isPrime(num) && isPrime(reverse(num)));
        printf("%d\n",res);
    }

    return 0;
}