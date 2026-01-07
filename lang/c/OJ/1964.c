#include<stdio.h>

int main() {
    int ord;
    int mat1[10][10]={0},mat2[10][10]={0};
    
    scanf("%d",&ord);

    for(int i=0,fill;i<ord;i++) {
        for(int j=0;j<ord;j++) {
            scanf("%d",&fill);
            mat1[j][i]=fill;
        }
    }

    for(int i=0,fill;i<ord;i++) {
        for(int j=0;j<ord;j++) {
            scanf("%d",&fill);
            mat2[i][j]=fill;
        }
    }

    for(int i=0;i<ord;i++) {
        for(int j=0;j<ord;j++) {
            int count=0;
            for(int k=0;k<ord;k++) {
                count+=mat1[i][k]*mat2[k][j];
            }
            printf("%d",count);
            if(j<ord-1) {
                printf(" ");
            } else {
                printf("\n");
            }
        }
    }

    return 0;
}