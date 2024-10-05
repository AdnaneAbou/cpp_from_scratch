#include <array>
#include <iostream>


template<typename T> 
void print_array(T array) {
    for (auto value : array) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::array<int, 3> my_int_array = {1, 2, 3};
    print_array<std::array<int,3>>(my_int_array);

    std::array<float, 4> my_float_array = {1.1f, 2.2f, 3.3f, 22.5f};
    print_array<std::array<float,4>>(my_float_array);

    return 0;
}
