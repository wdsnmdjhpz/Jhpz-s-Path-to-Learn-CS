#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int N,curr,idx,count=0;
    scanf("%d",&N);
    int* dic=(int*)malloc(N*sizeof(int));
    memset(dic,0,N*sizeof(int));

    for(int i=0;i<N;i++)
    {
        scanf("%d",&curr);
        idx=curr>0?curr:-curr;
        if(dic[idx]) count++;
        else dic[idx]=1;
    }

    printf("%d",count);

    free(dic);

    return 0;
}