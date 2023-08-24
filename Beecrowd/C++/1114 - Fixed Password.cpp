#include<iostream>
int main(){
    int X;
    while (1)
    {
        std::cin>>X;
        if(X==2002){
            std::cout<<"Acesso Permitido\n";
            break;
        }
        else std::cout<<"Senha Invalida\n";
    }    
}
