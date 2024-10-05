#include <iostream>

int main() {
    // Declare a pointer to an array of 10 integers
    int* ptr = new int[10];
    int* ptr_2 = ptr;
    // Assign a value to the first element
    ptr[0] = 42;

    // Display the memory address of the pointer
    std::cout << "Address stored in ptr: " << ptr << std::endl;
    std::cout << "Address stored in ptr_2: " << ptr_2 << std::endl;

    // Display the memory address of the first element (ptr[0])
    std::cout << "Address of ptr[0]: " << &ptr[0] << std::endl;

    // Display the value of the first element
    std::cout << "Value at ptr[0]: " << ptr[0] << std::endl;

    // Deallocate memory
    delete[] ptr;

    std::cout << "Address stored in ptr: " << ptr[0] << std::endl;
    std::cout << "Address stored in ptr_2: " << ptr_2 << std::endl;

    return 0;
}
 