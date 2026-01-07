#include<stdio.h>

int main()
{
    int dice[6]={0},res[6]={6,6,6,6,6,6},times;
    for(int i=0;i<6;i++)
    {
        int curr;
        scanf("%d",&curr);
        dice[i]=curr;
    }

    scanf("%d",&times);

    if(times==1)
    {
        for(int j=0;j<6;j++)
            if(dice[j]==res[j]) 
                res[j]--;
    }

    else
    {
        for(int i=0;i<times-1;i++)
            for(int j=0;j<6;j++)
            {    
                if(dice[j]==res[j]) 
                    res[j]--;

                res[j]--;

                if(dice[j]==res[j]) 
                    res[j]--;
            }
    }

    for(int i=0;i<6;i++)
        printf("%d ",res[i]);

    return 0;
}