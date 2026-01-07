#include<stdio.h>

int main() {
    int n,lag,beat=0,max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&lag);
        if(lag>=-100 && lag<=100) {
            beat++;
        } else {
            if(beat>max) {
                max=beat;
            }
            beat=0;
        }
    }

    if(beat>max) {
        max=beat;
    }

    printf("%d",max);

    return 0;
}