#include<stdio.h>

int main() {
    char oldw[100]={'\0'},neww[100]={'\0'};
    int top=-1;
    char n;
    while(1) {
        scanf("%c",&n);
        if(n!='\n') {
            top++;
            oldw[top]=neww[top]=n;
        } else {
            break;
        }
    }

    int num;
    scanf("%d",&num);
    char oldEnd=oldw[num-1],newEnd=neww[num];
    for(int i=num;i<=top;i++) {
        oldw[i]=oldEnd;
    }
    for(int i=num-1;i>=0;i--) {
        neww[i]=newEnd;
    }

    for(int i=0;i<=top;i++) {
        printf("%c",oldw[i]);
    }
    printf("\n");
    for(int i=0;i<=top;i++) {
        printf("%c",neww[i]);
    }

    return 0;
}