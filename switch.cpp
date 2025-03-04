#include <iostream>
//switch is alternative to if else it is used when a value is compared to a single value and is faster that if -else
int main(){
    char grade;
    std::cout<<"Enter your grade from A-F:";
    std::cin>>grade;
    switch (grade){
        case 'A':
            std::cout<<"You did greate";
            break;
        case 'B':
            std::cout<<"You did good";
            break;
        case 'C':
            std::cout<<"You did ok";
            break;
        case 'D':
            std::cout<<"You didn't do good";
            break;
        case 'F':
            std::cout<<"You failed";
            break;
        default:
            std::cout<<"Enter a valid grade from A to F";   
            break;
    }
    return 0;
}