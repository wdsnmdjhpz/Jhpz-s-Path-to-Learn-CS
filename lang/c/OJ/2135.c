#include<stdio.h>

int main() {
    char str1[100]={'\0'},str2[100]={'\0'};
    int top1=-1,top2=-1;
    char curr;

    while(scanf("%c",&curr)) {
        if(curr=='\n') {
            break;
        } else if(curr>='a' && curr<='z') {
            str1[++top1]=curr;
        }
    }

    while(scanf("%c",&curr)!=EOF) {
        if(curr>='a' && curr<='z') {
            str2[++top2]=curr;
        }
    }

    int shorter=(top1<top2?top1:top2),count=0;

    for(int i=0;i<=shorter;i++) {
        if(str1[i]==str2[i]) {
            count++;
        } else {
            break;
        }
    }

    printf("%d ",count);
    count=0;

    while(top1>=0 && top2>=0) {
        if(str1[top1--]==str2[top2--]) {
            count++;
        } else {
            break;
        }
    }

    printf("%d",count);

    return 0;
}