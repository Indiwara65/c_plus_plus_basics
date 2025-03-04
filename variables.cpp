#include <iostream>

int main(){

    //integer
    int x;      //declaration
    x = 5;      //assignment
    int y = 6;
    int z = 8.57;
    int sum = x + y;
    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    std::cout << "z = " << z << '\n';
    std::cout << "sum x y = " << sum << '\n';

    //double
    double unit_price = 10.53;
    int units = 10;
    double total = unit_price*units;
    std::cout << "total = " << total << '\n';

    //char - single character
    char grade = 'A';
    char initial = 'B';
    char dollarSign = '$';

    std::cout << grade << initial << dollarSign << '\n';

    //boolean (true or false)
    bool student = true;
    bool power = false;
    bool car = true;
    std::cout << student << power << car << '\n';

    //string - sequence of text
    std::string name = "date";
    std::string day = "04/03/2025";

    std::cout << name << " - " << day << '\n';

    return 0;

}