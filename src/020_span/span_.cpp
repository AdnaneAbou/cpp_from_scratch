#include <iostream>
#include <vector>
#include <span>

void print_subvector(std::span<int> span) {
    for (auto value: span) {
    std::cout << value << ' ';
    }
   std::cout << '\n';
}

int main() {
    std::vector<int> my_vector = {1,2,3,5,6};
    print_subvector(my_vector);
    return 0;
}
