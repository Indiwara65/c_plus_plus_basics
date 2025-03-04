#include <iostream>
//ternary operator can be used as a alternative to if else or switch where there is only one condition to check
//condition ? expresion 1 : expresion 2
int main(){
    int number;
    std::cout<<"Enter a whole number : ";
    std::cin>>number;
    //
    number%2==0 ? std::cout<<"The number is even.":std::cout<<"The number is odd";
    //
    bool hungry = true;
    std::cout<<(hungry ? "You are hungry." : "You are not hungry.");
}