#include<stdio.h>

int main() {
    int numOfStar=0,top=-1;
    char letters[1000]={'\0'},curr;
    
    while(scanf("%c",&curr)!=EOF) {
        if(curr=='*') {
            numOfStar++;
        } else {
            letters[++top]=curr;
            break;
        }
    }

    while(scanf("%c",&curr)!=EOF) {
        if(curr>='A' && curr<='Z') {
            letters[++top]=curr;
        }
    }

    for(int i=0;i<numOfStar;i++) {
        printf("*");
    }

    for(int i=0;i<=top;i++) {
        printf("%c",letters[i]);
    }

    return 0;
}