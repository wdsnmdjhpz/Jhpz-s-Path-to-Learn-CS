#include<stdio.h>
#include<string.h>
struct rec
{
	int e1,e2,e3,e4;
	int area;
}input[1000],output[1000];
int fun(struct rec a[],struct rec b[], int n)
{ 
/*****************开始***********************/
    int top=-1;
    for(int i=0;i<n;i++) {
        if((a[i].e1^a[i].e2) | (a[i].e1^a[i].e3) | (a[i].e1^a[i].e4)) {
            continue;
        } else {
            b[++top].area=a[i].e1*a[i].e1;
        }
    }

    for(int i=0,isOrd=1;i<=top;i++) {
        for(int j=top;j>i;j--) {
            if(b[j].area<b[j-1].area) {
                isOrd=0;
                int tmp=b[j-1].area;
                b[j-1].area=b[j].area;
                b[j].area=tmp;
            }
        }

        if(isOrd) {
            break;
        } else {
            isOrd=1;
        }
    }

    return top+1;
/*****************结束**********************/
}
int main()
{  
	int N,i,num;
	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%d%d%d%d",&input[i].e1,
		&input[i].e2,&input[i].e3,
		&input[i].e4);
	num=fun(input,output,N);
	for(i=0;i<num;i++)
		printf("%d\n",output[i].area);
	return 0;
}

