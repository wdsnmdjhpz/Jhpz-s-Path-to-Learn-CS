#include<stdio.h>
#include<stdlib.h>

int main()
{
    int a1,a2,n,top=2,next;
    scanf("%d%d%d",&a1,&a2,&n);
    int* arr=(int*)malloc((n+1)*sizeof(int));
    arr[0]=a1,arr[1]=a2;

    for(int i=2;i<n && top<=n-1;i++)
    {
        next=arr[i-1]*arr[i-2];
        if(next<10) arr[top++]=next;
        else
        {
            arr[top++]=next/10;
            arr[top++]=next%10;
        }
    }

    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);

    free(arr);

    return 0;
}