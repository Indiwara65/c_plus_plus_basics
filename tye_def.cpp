#include <iostream>
//typedef is used a to name / alias a variable type it can be a single variable type of multiple variable types as one eg - a list with string elements
typedef std::string text_t;
typedef int number_t;
//this can also be done with using keyword
using float64 = double;
int main(){
    text_t a = "Hello World";
    number_t b = 10;
    float64 pi = 3.14159;

    std::cout<<a<<'\n';
    std::cout<<b<<'\n';
    std::cout<<pi<<'\n';
    return 0;
}