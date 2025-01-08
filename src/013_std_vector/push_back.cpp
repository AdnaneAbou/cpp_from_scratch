#include <vector>
#include <iostream>

int main() {
    std::vector<int> vec;

    for (int i = 0; i < 10; ++i) {
        vec.push_back(i);  // Amortized O(1)
        std::cout << "Size: " << vec.size() << ", Capacity: " << vec.capacity() << "\n";
    }

    return 0;
}