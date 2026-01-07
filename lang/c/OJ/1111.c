#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);

    if(k==1)
        for(int i=1;i<=n;i++)
            printf("%d\n",i);

    else
    {
        int* lights=(int*)malloc((n+1)*sizeof(int));
        memset(lights,0,(n+1)*sizeof(int));

        for(int i=2;i<=k;i++)
            for(int j=i;j<=n;j+=i)
                lights[j]++;

        for(int i=1;i<=n;i++)
            if(lights[i]%2==0)
                printf("%d\n",i);

        free(lights);
    }

    return 0;
}