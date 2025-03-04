#include <iostream>
#include <cmath>

//reference - https://cplusplus.com/reference/cmath/

int main(){
    double x = 3;
    double y = 4;
    const double PI = 3.14159;
    double z;
    z = std::max(x,y);
    std::cout << z<<'\n';
    z = std::min(x,y);
    std::cout << z<<'\n';
    z = pow(2,3);
    std::cout << z<<'\n';
    z = sqrt(9);
    std::cout << z<<'\n';
    z = abs(-10);
    std::cout << z<<'\n';
    z = round(10.51);
    std::cout << z<<'\n';
    z = floor(10.51);
    std::cout << z<<'\n';
    z = ceil(10.51);
    std::cout << z<<'\n';
    z = sin(PI/6);
    std::cout << z<<'\n';
    return 0;

}