#include <iostream>
#include <array>


void print_array(std::array<int,3> array){
    for(auto value: array){
        std::cout<< value << " ";
    }
    std::cout<< '\n';
}

void print_array(std::array<int,3> array){
    // for(auto value: array){
    //     std::cout<< value << " ";
    // }
    std::cout<< "Hello world";
    std::cout<< '\n';

}
int main(){
    std::array<int,3> int_array = {1,23,3};

    print_array(int_array);

    std::array<float,3> float_array = {1.2f,2.3f,3.3f};

    return 0;
}