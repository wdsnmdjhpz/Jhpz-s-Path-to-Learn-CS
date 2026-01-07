#include<stdio.h>
#include<stdlib.h>
#define MAX 100000

typedef struct Stu{
    int id;
    struct Stu* next;
} Stu;

Stu* createStu(int id){
    Stu* newStu=(Stu*)malloc(sizeof(Stu));
    newStu->id=id;
    newStu->next=NULL;
    return newStu;
}

Stu* scores[MAX+1]={NULL};
Stu* tails[MAX+1]={NULL};

void insert(int id,int scr) {
    Stu* newStu=createStu(id);
    if(scores[scr]==NULL) {
        scores[scr]=newStu;
    } else {
        tails[scr]->next=newStu;
    }
    tails[scr]=newStu;
}

int main() {
    int M,N;
    scanf("%d%d",&M,&N);
    
    int id,scr;
    for(int i=0;i<N;i++) {
        scanf("%d%d",&id,&scr);
        insert(id,scr);
    }

    for(int i=M;i>=0;i--) {
        printf("%d",i);
        Stu *prtStu=scores[i];
        while(prtStu!=NULL) {
            printf(" %d",prtStu->id);
            prtStu=prtStu->next;
        }
        printf("\n");
    }

    return 0;
}