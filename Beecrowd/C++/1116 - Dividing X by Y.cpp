#include<iostream>
#include<iomanip>
int main(){
    int X,Y,n,i;
    std::cin>>n;
    std::cout<<std::fixed<<std::setprecision(1);
    for(i=0;i<n;i++){
        std::cin>>X>>Y;
        if(Y==0) std::cout<<"divisao impossivel\n";
        else std::cout<<(float)X/(float)Y<<std::endl;
    }
}
