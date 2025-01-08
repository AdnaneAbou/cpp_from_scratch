#include <iostream>
#include <vector>

void print(std::vector<int> vector) {
    for(auto value : vector) {
        std::cout << value << ' ';
    }
    std::cout << '\n';
}

int main() {
    std::vector<int> my_vector;
    my_vector.reserve(10);
    std::cout << "The size of the array " << sizeof(my_vector)<< std::endl ;
    for(int i = 0; i < 17; i+=1) {
        std::cout << "Size: " << my_vector.size() << " Capacity: " << my_vector.capacity() << '\n';
        my_vector.push_back(i);
        // Pushback doesn't accept inplace object creation inside the vector , it creates the object then moves
    }
    return 0;
}
