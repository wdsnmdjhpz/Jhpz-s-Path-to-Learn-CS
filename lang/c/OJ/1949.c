#include<stdio.h>

int reverse(int num) {
    int res=0,curr;
    while(num) {
        curr=num%10;
        res=res*10+curr;
        num/=10;
    }
    return res;
}

int isPrm(int num) {
    if(num==2) {
        return 1;
    }

    if(num<2 || !(num&1)) {
        return 0;
    }

    for(int i=3;i*i<=num;i+=2) {
        if(num%i==0) {
            return 0;
        }
    }

    return 1;
}

void quick_sort(int* q,int l,int r) {
    if(l>=r) {
        return;
    }
    int i=l-1,j=r+1,x=q[l+r>>1];

    while(i<j) {
        do i++; while(q[i]<x);
        do j--; while(q[j]>x);
        if(i<j) {
            int temp=q[i];
            q[i]=q[j];
            q[j]=temp;
        }
    }

    quick_sort(q,l,j);
    quick_sort(q,j+1,r);
}

int main() {
    int nums[100]={0};
    int n,curr,top=-1;

    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d",&curr);
        if(isPrm(curr)*isPrm(reverse(curr))) {
            nums[++top]=curr;
        }
    }

    quick_sort(nums,0,top);

    for(int i=0;i<=top;i++) {
        printf("%d\n",nums[i]);
    }

    return 0;
}