#include<stdio.h>
#include<math.h>

void swap(int* x,int* y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
}

void sort(int* a,int* b,int* c)
{
    if(*a>*b) swap(a,b);
    if(*b>*c) swap(b,c);
    if(*a>*b) swap(a,b);
}

int main()
{
    int a,b,c;
    double p,s;
    scanf("%d %d %d",&a,&b,&c);

    sort(&a,&b,&c);

    if(a+b<=c) printf("%d",-1);
    else
    {
        p=(a+b+c)/2.0;
        s=sqrt(p*(p-a)*(p-b)*(p-c));
        printf("%.2f",s);
    }

    return 0;
}