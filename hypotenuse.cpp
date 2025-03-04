#include <iostream>
#include <cmath>

int main(){
    double x;
    double y;
    double z;
    std::cout<<"Length of side one?";
    std::cin>>x;
    std::cout<<"Length of side two?";
    std::cin>>y;
    z = sqrt(pow(x,2)+pow(y,2));
    std::cout<<"Length of hypotenuse :"<<z;
    return 0;
}