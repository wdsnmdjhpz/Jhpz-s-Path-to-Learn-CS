#include<stdio.h>

int main()
{
    int a,b,c,share,eaten,total=0;
    scanf("%d %d %d",&a,&b,&c);
    int nums[3]={a,b,c};

    for(int i=0;i<3;i++)
    {
        share=nums[i]/3;
        eaten=nums[i]%3;
        total+=eaten;
        for(int j=0;j<3;j++) nums[j]+=share;
        nums[i]=(nums[i]-share)/3;
    }

    printf("%d %d %d\n",nums[0],nums[1],nums[2]);
    printf("%d",total);
}