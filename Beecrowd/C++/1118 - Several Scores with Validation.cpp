#include<iostream>
#include<iomanip>
int main(){
    float X,Y;
    int check=1;
    while(check==1){
    while (1)
    {
        std::cin>>X;
        if(X>=0&&X<=10) break;
        else std::cout<<"nota invalida\n";
    }
    while (1)
    {
        std::cin>>Y;
        if(Y>=0&&Y<=10) break;
        else std::cout<<"nota invalida\n";
    }
    std::cout<<std::fixed<<std::setprecision(2);
    std::cout<<"media = "<<(X+Y)/2<<std::endl;
    again: std::cout<<"novo calculo (1-sim 2-nao)\n";
    std::cin>>check;
    if(check==2) break;
    else if(check==1){}
    else goto again;
    }
}
