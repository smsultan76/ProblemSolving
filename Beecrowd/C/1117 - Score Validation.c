#include<stdio.h>
int main(){
    float X,Y;
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
}
