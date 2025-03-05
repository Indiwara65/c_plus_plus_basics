#include <iostream>

int main(){
    int max;
    int steps;
    std::cout<<"Enter maximum:";
    std::cin>>max;
    std::cout<<"Enter steps:";
    std::cin>>steps;
    for (int i=1;i<=20;i++){
        std::cout<<i<<":";
        for (int j=1;j<=steps;j++){
            std::cout<<j<<" ";
        }
        if (i>=max) { 
            break;
        }
        std::cout<<'\n';
    }
}