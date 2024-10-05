#include <algorithm>
#include <iostream>
#include <array>

void print(auto array){
    for(auto value : array){
        std::cout << value << " ";
    }

    std::cout << "\n";
}



int main(){
    std::array<int, 5> my_array = {5, 4, 1, 2,3};
    print(my_array);
    std::sort(my_array.begin(), my_array.end());
    print(my_array);

    std::array<int, 5> array1 = {15, 4, 31, 222,55};
    // std::ranges::sort(array1);
    std::sort(array1.begin(), array1.end());
    print(array1);

    return 0;
}