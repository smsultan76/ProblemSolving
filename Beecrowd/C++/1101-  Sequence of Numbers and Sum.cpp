#include<iostream>
void swap(int &m,int &n){
    int temp = m;
    m= n;
    n= temp;
}
int main(){
    int m,n,s;
    while(1){
    std::cin>>m>>n;
    if(n<=0||m<=0)break;
    if(n<m){
        swap(m,n);
    }
    s=0;
    for(int i=m;i<=n;i++) {
        std::cout<<i<<" ";
        s=s+i;
    } std::cout<<"Sum="<<s<<std::endl;
    }
}
