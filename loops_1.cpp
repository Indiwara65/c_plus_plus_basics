#include <iostream>

int main(){
    std::string name;
    std::string age_str;
    int age = -1;

    //while loop
    while (name.empty()){
        std::cout<<"Enter your name:";
        std::getline(std::cin, name);
    }
    std::cout<<"Welcome! "<<name<<'\n';

    //do while - runs the code bit and then checks the condition
    do {
        std::cout<<"Enter your age:";
        std::getline(std::cin, age_str);
        try {
            age = std::stoi(age_str);
        }catch(...){
            age = -1;
        }
    }while (age<0 || age>100);
    std::cout<<"Your age is "<<age;

    //for
    int len = name.length();
    for (int i=0;i<len;i+=1){
        std::cout<<'\n'<<name.at(i);
    }

    
    return 0;
}