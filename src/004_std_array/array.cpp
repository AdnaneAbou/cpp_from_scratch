#include <array>
#include <iostream>

int main() {
    std::array<double, 6> my_array = {45, 23, 3, 10, 40};
    my_array.fill(0.0);

    std::cout << my_array.size() << '\n';
    
    std::cout << "This is the front " << my_array.front() << '\n';

    std::cout << "This is the back " << my_array.back() << '\n';
    return 0;
}
