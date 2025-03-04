#include <iostream>
//name spaces can be used to delcalre varaibles with the same name
namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    std::cout << "first x = " << first::x << '\n';
    std::cout << "second x = " << second::x << '\n';
    //
    {
        using namespace first;
        std::cout << "first x = " << x << '\n';
    }
    {
        using namespace second;
        std::cout << "second x = " << x << '\n';
    }
    return 0;
}