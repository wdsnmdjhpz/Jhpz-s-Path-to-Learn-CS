#include<stdio.h>
#include<stdlib.h>

void helper(int** matrix,int num,int start,int end)
{
    if(start>end) return;
    if(start==end) 
    {
        matrix[start][end]=num;
        return;
    }

    int len=end-start;

    for(int i=start;i<end;i++)
    {
        matrix[i][end]=num+len;
        matrix[start][i]=num++;
    }
    
    num+=len;

    for(int i=end;i>start;i--)
    {
        matrix[i][start]=num+len;
        matrix[end][i]=num++;
    }

    helper(matrix,num+len,start+1,end-1);
}

int** buildCircle(int n)
{
    int** matrix=malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
        matrix[i]=calloc(n,sizeof(int));

    helper(matrix,1,0,n-1);

    return matrix;
}

void freeMatrix(int** matrix,int n)
{
    for(int i=0;i<n;i++) free(matrix[i]);
    free(matrix);
}

void printMatrix(int** matrix,int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",matrix[i][j]);
        printf("\n");
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    
    int** matrix=buildCircle(n);

    printMatrix(matrix,n);
    freeMatrix(matrix,n);

    return 0;
}