#include <array>
#include <iostream>

void print_array(std::array<int,5> array){

    for(int value : array){
        std::cout << value << ' ';
    }

    std::cout << '\n';
    }


main() {

    std::array<int,5> my_array = {1,5,8,8,5};
    print_array(my_array);
    std::array<int,5> my_array_1 = {2,5,2,4,5};
    print_array(my_array_1);
    return 0;
}