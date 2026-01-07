#include<stdio.h>
#include<stdlib.h>
#include<math.h>

char* createStr() {
    char* newStr=(char*)malloc(8);
    return newStr;
}

int main() {
    int N,top=-1,i,j,k;
    char* names[100]={NULL};
    int scores[100][3]={0};
    scanf("%d",&N);

    int ch,math,en,tt1=0,tt2=0;

    for(i=0;i<N;i++) {
        char* name=createStr();
        scanf("%s %d %d %d",name,&ch,&math,&en);
        names[++top]=name;
        scores[top][0]=ch;
        scores[top][1]=math;
        scores[top][2]=en;
    }

    for(i=0;i<=top;i++) {
        for(j=i+1;j<=top;j++) {
            for(k=0;k<3;k++) {
                if(abs(scores[i][k]-scores[j][k])>5) {
                    break;
                }
                tt1+=scores[i][k];
                tt2+=scores[j][k];
            }
            if(k==3 && abs(tt1-tt2)<=10) {
                printf("%s %s\n",names[i],names[j]);
            }

            tt1=tt2=0;
        }
    }

    return 0;
}