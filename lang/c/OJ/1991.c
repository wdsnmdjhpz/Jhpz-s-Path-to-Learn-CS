#include<stdio.h>

int main()
{
    double n,L,BMI;
    scanf("%lf %lf",&n,&L);

    BMI=n/(L*L);
    printf("%.1f\n",BMI);
    
    if(BMI>25) printf("PANG");
    else printf("Hai Xing");

    return 0;
}