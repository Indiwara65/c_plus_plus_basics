#include<iostream>

/*
type conversion - conversion of a value from one data type to another
                - Implicit - automatic
                - Explicit - precede value with new data type ()*/
int main(){
    //Implicit
    int x = 3.14; // Implicit automatically converted to int - 3 
    std::cout<<"x = "<<x<<'\n';
    char y = 100; // Converts 100 Implicitly to d according to ascii tables
    std::cout<<"y = "<<y<<'\n';
    //Explicit
    int questions = 10;
    int correct = 8;
    double score = (correct/questions) * 100;  //return 0 as both varaibles are integer
    std::cout<<"score:"<<score<<'\n';
    score = ((double) correct/ (double) questions) * 100; //Explicit convertion
    std::cout<<"score:"<<score<<'\n';
    score = 80.25;
    std::cout<<(char) score<< (char) questions;
    return 0;
}