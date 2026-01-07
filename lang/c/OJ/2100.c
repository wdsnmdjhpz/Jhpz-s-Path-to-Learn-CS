#include<stdio.h>
#include<stdlib.h>

char* createNum() {
    char* num=(char*)malloc(16);
    return num;
}

typedef struct Stu {
    char* num;
    int seat;
} Stu;

Stu* createStu(char* num,int seat) {
    Stu* newStu=(Stu*)malloc(sizeof(Stu));
    newStu->num=num;
    newStu->seat=seat;
    return newStu;
}

int main() {
    int N,M,comp,seat;
    Stu* stus[11]={NULL};
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        char* num=createNum();
        scanf("%s %d %d\n",num,&comp,&seat);
        stus[comp]=createStu(num,seat);
    }

    scanf("%d",&M);
    for(int i=0;i<M;i++) {
        scanf("%d",&comp);
        printf("%s %d\n",stus[comp]->num,stus[comp]->seat);
    }

    return 0;
}