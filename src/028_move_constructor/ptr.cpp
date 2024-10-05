#include <iostream>
#include <vector>

struct S {
    S() {
        std::cout << "Constructor!\n";
    }
    ~S() {
        std::cout << "Destructor!\n";
    }
    S(const S &) {
        std::cout << "Copy Constructor!\n";
    }
    S(S &&) {
        std::cout << "Move Constructor!\n";
    }
};

int main() {
    std::vector<S*> my_vector; // Vector to hold pointers to S objects
    S s; // Create an S object
    my_vector.push_back(&s); // Push the address of s into the vector

    // This line is to see if the vector holds the pointer correctly
    std::cout << "Pointer address stored in vector: " << my_vector[0] << std::endl;

    return 0;
}
