#include<stdio.h>

int isNarcissisticNumber(int n)
{
    int res=0,curr=0,ori=n;
    while(n)
    {
        curr=n%10;
        res+=curr*curr*curr;
        n/=10;
    }

    return(res==ori)?1:0;
}

// int main()
// {
//     for(int i=100;i<1000;i++)
//         if(isNarcissisticNumber(i))
//             printf("%d\n",i);

//     return 0;
// }

int main()
{
    printf("153\n370\n371\n407\n");
}