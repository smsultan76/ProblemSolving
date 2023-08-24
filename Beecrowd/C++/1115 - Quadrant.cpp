#include<iostream>
int main(){
    int X,Y;
    while (1)
    {
        std::cin>>X>>Y;
        if(X==0||Y==0) break;
        else if (X>0&&Y>0) std::cout<<"primeiro\n";
        else if (X>0&&Y<0) std::cout<<"quarto\n";
        else if (X<0&&Y<0) std::cout<<"terceiro\n";
        else std::cout<<"segundo\n";

    }    
}
