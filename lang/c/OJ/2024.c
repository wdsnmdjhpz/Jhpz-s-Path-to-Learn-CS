#include<stdio.h>
#include<stdlib.h>

void sort(int* q,int l,int r)
{
    if(l>=r) return;
    int i=l-1,j=r+1,x=q[l+r>>1];

    while(i<j)
    {
        do i++; while(q[i]<x);
        do j--; while(q[j]>x);
        if(i<j)
        {
            int temp=q[i];
            q[i]=q[j];
            q[j]=temp;
        }
    }

    sort(q,l,j);
    sort(q,j+1,r);
}

int main()
{
    int K,curr;
    scanf("%d",&K);

    int* grades=(int*)malloc(K*sizeof(int));
    for(int i=0;i<K;i++)
    {
        scanf("%d",&curr);
        if(curr<70) curr=0;
        grades[i]=curr;
    }
    
    sort(grades,0,K-1);

    for(int i=K-1;i>=0 && grades[i]!=0;i--)
        printf("%d\n",grades[i]);

    free(grades);

    return 0;
}