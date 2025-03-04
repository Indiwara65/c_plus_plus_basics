#include<iostream>

int main(){
    std::string name;
    std::string full_name;
    int age;
    std::cout << "What is your name?";
    std::cin >> name;
    //
    std::cout << "What is your age?";
    std::cin >> age;
    //
    std::cin.ignore();
    std::cout<<"What is your full name?\n";
    std::getline(std::cin, full_name);

    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old \n";
    std::cout << "and your full name is " << full_name;
    return 0;
}