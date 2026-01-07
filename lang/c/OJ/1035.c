#include<stdio.h>

void chickenAndRabbit(int head,int leg)
{
    int chicken,rabbit;
    rabbit=(leg-head-head)/2;
    chicken=head-rabbit;

    if(chicken>=0 && rabbit>=0 && 2*chicken+4*rabbit==leg)
        printf("%d %d",chicken,rabbit);
    else
        printf("-1 -1");
}

int main()
{
    int head,leg;
    scanf("%d %d",&head,&leg);
    chickenAndRabbit(head,leg);

    return 0;
}