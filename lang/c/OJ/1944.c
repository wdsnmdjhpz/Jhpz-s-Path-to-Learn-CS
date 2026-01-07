#include<stdio.h>
#include<stdlib.h>

char* createStr() {
    char* str=(char*)malloc(20000);
    return str;
}

int main() {
    int n,m,top=0;
    scanf("%d%d\n",&n,&m);
    char* strs[101]={NULL};
    
    for(int i=2;i<=n+1;i++) {
        char*str=createStr();
        scanf("%s\n",str);
        strs[++top]=str;
    }

    int* idx=(int*)malloc((top+1)*sizeof(int));
    for(int i=1;i<=top;i++) {
        idx[i]=i;
    }

    int x,y;
    for(int i=0;i<m;i++) {
        scanf("%d%d",&x,&y);
        int temp=idx[x];
        idx[x]=idx[y];
        idx[y]=temp;
    }

    for(int i=1;i<=top;i++) {
        printf("%s\n",strs[idx[i]]);
    }

    return 0;
}