#include <iostream>

extern "C" int add(int a, int b);

int main(){
    std::cout << "1+2=" << add(1, 2) << std::endl;
}
