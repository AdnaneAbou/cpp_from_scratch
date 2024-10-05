#include <iostream>
#include <memory>

int main() {
    // Create a shared pointer for a single integer
    auto ptr1 = std::make_shared<int>(10); // Allocate a single integer initialized to 10
    auto ptr2 = ptr1; // Copy the shared pointer
    std::cout << "Reference count: " << ptr1.use_count() << '\n'; // Output should be 2
    std::cout << "ptr1 " << ptr1 << '\n'; // Output should be 2

    return 0;
}
