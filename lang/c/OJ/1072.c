#include<stdio.h>
#include<stdlib.h>

int* mergeOrdered(int* arr1,int len1,int* arr2,int len2)
{
    int* result=(int*)malloc((len1+len2)*sizeof(int));
    int push=0,p1=0,p2=0;

    while(p1<len1 && p2<len2) result[push++]=(arr1[p1]<=arr2[p2]) ? arr1[p1++] : arr2[p2++];

    while(p1<len1) result[push++]=arr1[p1++];
    while(p2<len2) result[push++]=arr2[p2++];

    return result;
}

int main()
{
    int len1,len2,curr;
    scanf("%d%d",&len1,&len2);

    int* arr1=(int*)malloc(len1*sizeof(int));
    int* arr2=(int*)malloc(len2*sizeof(int));

    for(int i=0;i<len1;i++)
    {
        scanf("%d",&curr);
        arr1[i]=curr;
    }

    for(int i=0;i<len2;i++)
    {
        scanf("%d",&curr);
        arr2[i]=curr;
    }

    int* res=mergeOrdered(arr1,len1,arr2,len2);

    for(int i=0;i<len1+len2;i++) printf("%d ",res[i]);

    free(arr1);
    free(arr2);
    free(res);

    return 0;
}