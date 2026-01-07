#include<stdio.h>
#include<stdlib.h>
#define CITYMAX 81

void sort(int *years,char **cities,int n) {
    if(n<=1) {
        return;
    }

    int lastSwap=n-1,swapPos=0,isOrd;
    int tmpi;
    char* tmpc;

    while(lastSwap!=0) {
        isOrd=1;
        for(int i=0;i<lastSwap;i++) {
            if(years[i]>years[i+1]) {
                tmpi=years[i];
                years[i]=years[i+1];
                years[i+1]=tmpi;

                tmpc=cities[i];
                cities[i]=cities[i+1];
                cities[i+1]=tmpc;

                swapPos=i;
                isOrd=0;
            }
        }

        if(isOrd) {
            break;
        }

        lastSwap=swapPos;
    }
}

int main() {
    int n,top,topa=-1,year,inputyear;
    scanf("%d",&n);
    getchar();
    int *years=(int*)malloc(n*sizeof(int));
    char input;
    char *city;
    char **cities=(char**)malloc(n*sizeof(char*));

    for(int i=0;i<n;i++) {
        year=0;
        top=-1;
        city=(char*)malloc(CITYMAX);
        while(1) {    
            scanf("%c",&input);
            if((input>='A' && input<='z') || input==' ') {
                city[++top]=input;
            } else {
                city[top]='\0';
                year+=(input-'0')*1000;
                scanf("%d",&inputyear);
                year+=inputyear;
                getchar();
                
                cities[++topa]=city;
                years[topa]=year;
                break;
            }
        }
    }

    sort(years,cities,n);

    for(int i=0;i<n-1;i++) {
        if(years[i]==years[i+1]) {
            continue;
        } else {
            printf("%d %s\n",years[i],cities[i]);
        }
    }

    printf("%d %s\n",years[n-1],cities[n-1]);

    return 0;
}