#include <iostream>

int main(){
    int score;
    std::cout<<"What is your score?";
    std::cin>>score; 
    
    if(score >= 75){
        std::cout<<"A";
    }
    else if(score >= 65){
        std::cout<<"B";
    }
    else if(score >= 55){
        std::cout<<"C";
    }
    else{
        std::cout<<"Fail";
    }
    return 0;
}