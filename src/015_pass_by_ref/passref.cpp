#include <iostream>
#include <vector>
#include <array>


void add_elements(std::array<int,5> &array){
    for (int i = 0; i < 5; i += 1){
        array.at(i) = i;
    }
}

void add_elements(std::vector<int> &vector, int N){
    for (int i = 0; i < N; i += 1){
        vector.push_back(i);
    }
}

void print_elements(auto vector){
    std::cout << "Elements of the Vector \n";

    for(auto value : vector){
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

void print_elements(auto array){
    std::cout << "Elements of the Array \n";
    for(auto value : array){
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

int main(){
    std::vector<int> my_vector ;
    std::array<int, 5> my_array ;
    add_elements(my_array);
    print_elements(my_array);
    add_elements(my_vector,10);
    print_elements(my_vector);
    return 0;
}