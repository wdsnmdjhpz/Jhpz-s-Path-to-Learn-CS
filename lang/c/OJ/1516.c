#include<stdio.h>

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

int isTriangle(int* a,int* b,int* c)
{
    sort(a,b,c);
    if(*a+*b<=*c) return 0;
    else return 1;
}

int main()
{
    int a,b,c,num,equal=0;
    scanf("%d",&num);
    
    for(int i=0;i<num;i++)
    {
        equal=0;
        scanf("%d %d %d",&a,&b,&c);
        
        if(!isTriangle(&a,&b,&c)) printf("Not Triangle\n");

        else
        {
            if(a==b) equal++;
            if(b==c) equal++;

            switch(equal)
            {
                case 0:
                printf("Triangle\n");
                break;

                case 1:
                printf("Isosceles Triangle\n");
                break;

                case 2:
                printf("Regular Triangle\n");
                break;
            }
        }
    }

    return 0;
}