#include<stdio.h>

int main()
{
    int num=0;
    for(int i=100;i<=200;i++)
    {
        if(i%3!=0) 
        {
            printf("%6d",i);
            num++;
        }

        if(num==6)
        {
            printf("\n");
            num=0;
        }
    }

    printf("\n");
}