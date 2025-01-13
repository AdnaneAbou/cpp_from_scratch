#include<iostream>
#include<vector>

int main() {
    std::vector<int> my_vector( 1 << 2, 5); 
    for(auto value : my_vector)
    {
        std::cout <<  value << "\n";
    }
    return 0;
}