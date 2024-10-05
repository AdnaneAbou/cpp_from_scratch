#include <iostream>
#include <memory>
#include <array>
int main(){

    std::unique_ptr<int[]> ptr(new int[10]);
    ptr[0] =-11;
    std::cout << &ptr[0] << "\n";
    std::cout << ptr[0] << "\n";

    return 0;
}