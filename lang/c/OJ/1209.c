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

int main()
{
    int upLimit;
    scanf("%d",&upLimit);

    if(upLimit%2==0) upLimit--;
    while(!isPrime(upLimit) || !isPrime(upLimit-2)) upLimit-=2;
    printf("%d %d",upLimit-2,upLimit);

    return 0;
}