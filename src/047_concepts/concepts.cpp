#include <concepts>
#include <iostream>

void print(std::integral auto value) {
    std::cout << "Printing integral value: " << value << '\n';
}

int main() {
    print(10352);
    return 0;
}
