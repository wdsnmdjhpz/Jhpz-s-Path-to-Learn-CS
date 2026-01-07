#include<stdio.h>
#include<stdlib.h>

int main()
{
    int N,M,Q,loc,idx;
    scanf("%d%d%d",&N,&M,&Q);

    int dic[2][101]={0},line=0,col=0;

    for(int i=0;i<Q;i++)
    {
        scanf("%d%d",&loc,&idx);
        if(dic[loc][idx]==0)
        {
            dic[loc][idx]=1;
            (loc==0)?line++:col++;
        }
    }

    printf("%d",M*N-line*M-col*N+line*col);

    return 0;
}