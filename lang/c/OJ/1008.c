#include<stdio.h>

char* isPrime(int n)
{
    if(n==2) return "Yes";
    if(n%2==0) return "No";

    for(int i=3;i*i<=n;i+=2)
        if(n%i==0)
            return "No";

    return "Yes";
}

int main()
{
    int n;
    scanf("%d",&n);

    printf("%s",isPrime(n));

    return 0;
}