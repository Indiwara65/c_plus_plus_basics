#include <iostream>

int main(){
    std::string name;
    std::cout<<"Enter your name?";
    std::cin>>name;
    //length
    if (name.length()>12){
        std::cout<<"Your name "<< name << " is too long!";
    }
    //empty
    else if (name.empty()){
        std::cout<<"No name entered";
    }
    else{
        int len = name.length();
        //append
        name.append("gamil.com");
        //insert
        name.insert(len,"@");
        //find
        int at_index = name.find("@");
        std::cout<<name<<'\n';
        //at
        std::cout<<name.at(at_index)<<'\n';
        //clear
        name.clear();
        std::cout<<name;
    }
}