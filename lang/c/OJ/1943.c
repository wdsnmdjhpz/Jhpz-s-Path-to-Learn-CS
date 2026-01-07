#include<stdio.h>
#include<stdlib.h>

int main() {
    char strs[1010000]={'\0'};
    int pos[10001][2]={0};
    int n,m,sz,prev,idx,top=-1;
    char curr;

    scanf("%d%d",&n,&m);

    scanf("%d",&sz);
    pos[1][0]=0;
    pos[1][1]=sz-1;
    getchar();
    for(int i=0;i<sz;i++) {
        scanf("%c",&curr);
        strs[++top]=curr;
    }
    getchar();

    for(int i=2;i<=n;i++) {
        scanf("%d",&sz);
        prev=pos[i-1][1];
        pos[i][0]=prev+1;
        pos[i][1]=prev+sz;
        getchar();
        for(int i=0;i<sz;i++) {
        scanf("%c",&curr);
        strs[++top]=curr;
        }
        getchar();
    }

    for(int i=0;i<m;i++) {
        scanf("%d",&idx);
        for(int j=pos[idx][0];j<=pos[idx][1];j++) {
            printf("%c",strs[j]);
        }
        printf("\n");
    }
}