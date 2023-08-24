#include<stdio.h>
int main(){
    float X,Y;
    int check=1;
    while(check==1){
    while (1)
    {
        scanf("%f",&X);
        if(X>=0&&X<=10) break;
        else printf("nota invalida\n");
    }
    while (1)
    {
        scanf("%f",&Y);
        if(Y>=0&&Y<=10) break;
        else printf("nota invalida\n");
    }
    printf("media = %.2f\n",(X+Y)/2);
    again: printf("novo calculo (1-sim 2-nao)\n");
    scanf("%d",&check);
    if(check==2) break;
    else if(check!=1)goto again;
    }
}
