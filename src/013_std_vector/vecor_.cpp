#include <iostream>
#include <vector>

void print(auto vecotr){
    for (auto value : vecotr){
        std::cout << value << " ";
    }
    std::cout << "\n";
}

int main(){
    std::vector<int> my_vector;
    for(int i=0; i<10;i += 1){
        my_vector.reserve(8);
        my_vector.push_back(i);
        std::cout << "Memory address of front : "<< &(my_vector.at(0)) <<"\n";
        std::cout << "Size : "<<my_vector.size() << "\n";
        std::cout << "Capacity :  " <<my_vector.capacity() << "\n";
    }

    return 0;
}