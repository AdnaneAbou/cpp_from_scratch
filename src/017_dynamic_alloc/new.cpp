#include <iostream>

int main() {
    int *int_ptr = new int[10];
    int_ptr[0] = 241;
    // int_ptr[6] = 22;
    std::cout << "Value " << int_ptr << '\n';
    // std::cout << "int_ptr[6] " << int_ptr[6] << '\n';
    std::cout << "int_ptr[0] " << int_ptr[0] << '\n';
    std::cout << "&int_ptr " <<  &int_ptr  << '\n';
    std::cout << " &int_ptr[0] " <<  &int_ptr[0]  << '\n';
    delete[] int_ptr;
    return 0;
}