#include <iostream>
int main(){
    char op;
    double num1;
    double num2;
    double result;
    std::cout<<"*********** Calculator **********\n";
    
    std::cout<<"Enter num 1 :";
    std::cin>>num1;

    std::cout<<"Enter num 2 :";
    std::cin>>num2;

    std::cout<<"Operation '+,-,*,/':";
    std::cin>>op;

    switch (op)
    {
    case '+':
        result = num1 + num2;
        std::cout<<"Result:"<<result;
        break;
    case '-':
        result = num1 - num2;
        std::cout<<"Result:"<<result;
        break;
    case '*':
        result = num1 * num2;
        std::cout<<"Result:"<<result;
        break;
    case '/':
        result = num1 / num2;
        std::cout<<"Result:"<<result;
        break;
    default:
        std::cout<<"Enter valid operator out of + - * /";
        break;
    }

    std::cout<<"\n*********************************";
    return 0;
}