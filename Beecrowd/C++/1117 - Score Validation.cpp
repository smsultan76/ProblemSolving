#include<iostream>
#include<iomanip>
int main(){
    float X,Y;
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
}
