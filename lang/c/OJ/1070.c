#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n,k,curr;
    scanf("%d%d",&n,&k);

    int* arr=(int*)malloc(n*sizeof(int));

    for(int i=n-k;i<n;i++)
    {
        scanf("%d",&curr);
        arr[i]=curr;
    }

    for(int i=0;i<n-k;i++)
    {
        scanf("%d",&curr);
        arr[i]=curr;
    }

    for(int i=0;i<n;i++) printf("%d\n",arr[i]);

    free(arr);

    return 0;
}