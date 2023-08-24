#include<iostream>
int main(){
    int X,Y;
    while(1){
    std::cin>>X>>Y;
    if(X==Y)break;
    if(X>Y){
        std::cout<<"Decrescente"<<std::endl;
    }
    else std::cout<<"Crescente"<<std::endl;
    }
}
