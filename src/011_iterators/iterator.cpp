#include <array>
#include <iostream>

int main() {
    std::array<int, 5> my_array = {1, 2, 3, 4, 5};
    std::cout << " Length of the array is : "<< my_array.size() << std::endl;
    for(auto itr = my_array.rbegin() + 1; itr < my_array.rend(); itr += 1) {
        std::cout << *itr << ' ';
    }
    std::cout << '\n';

    return 0;
}
