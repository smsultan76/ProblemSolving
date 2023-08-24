#include<stdio.h>
int main(){
    int X,Y,n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d%d",&X,&Y);
        if(Y==0) printf("divisao impossivel\n");
        else printf("%.1f\n",(float)X/(float)Y);
    }
}
