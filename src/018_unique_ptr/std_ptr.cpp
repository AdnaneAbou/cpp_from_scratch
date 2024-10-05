#include <iostream>
#include <memory>

int main(){
    std::unique_ptr<int[]> ptr(new int[10]);
    ptr[1] = 100;
    std::cout << ptr.get() << '\n';
    // std::cout << &ptr[0] ;
    std::cout << ptr[1] << '\n';
    std::cout << &ptr[1];

    return 0;
}