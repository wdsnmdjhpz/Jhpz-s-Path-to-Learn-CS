#include<stdio.h>

int main()
{
    
    int n;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        int max=0,min=100,num=0,curr=0;
        double sum=0;
        while(1)
        {
            scanf("%d",&curr);
            if(curr!=-1)
            {
                num++;
                sum+=curr;
                if(curr>max) max=curr;
                if(curr<min) min=curr;
            }

            else break;
        }

        printf("%d\n%d\n%d\n%.1f\n",num,max,min,sum/num);
    }
}