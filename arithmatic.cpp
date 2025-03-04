#include <iostream>
//arithmatic operations - +,-,*,/,%
/*Order of Precidense
    1. parathesis
    2. multiplcation and division
    3. addition and susbtraction*/
int main(){
    /*int students = 0;
    // + 
    std::cout<<students<<'\n';
    students = students + 1;
    std::cout<<students<<'\n';
    students++;
    std::cout<<students<<'\n';
    students+=1;
    std::cout<<students<<'\n';
    students+=2;
    std::cout<<students<<'\n';
    // -
    students--;
    std::cout<<students<<'\n';
    students-=2;
    std::cout<<students<<'\n';
    // *
    students = students * 2;
    std::cout<<students<<'\n';
    students *= 2;
    std::cout<<students<<'\n';
    // /
    students = students / 2;
    std::cout<<students<<'\n';
    students /= 2;
    std::cout<<students<<'\n';
    students = 10;
    students = students / 3; //will be rounded to the neareast int
    std::cout<<students<<'\n';
    // %
    students = 10;
    int remainder = students % 3;
    std::cout<<remainder<<'\n';
    remainder = students % 2;
    std::cout<<remainder<<'\n';*/
    // order of presidense
    double result;
    result = 10*12 /  4;
    std::cout<<result<<'\n';
    result = 12/4 * 10;
    std::cout<<result<<'\n';
    result = 3.0/4.0 * 10;
    std::cout<<result<<'\n';
    result = 6 - 5 + 4.0*3.0 /10 ;
    std::cout<<result<<'\n';
    result = (6 - 5 + 4.0*3.0) /10 ;
    std::cout<<result<<'\n';
    return 0;
}