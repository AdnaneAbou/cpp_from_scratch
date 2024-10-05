#include <iostream>
#include <memory>

int main() {
    std::shared_ptr<int[]> ptr1(new int[10]);
    auto ptr2 = ptr1;
    for(int i = 0; i < 10; i++){
        ptr1[i] = i*i + 1;
    }

    ptr2[5] = 0;
    std::cout << "Reference count: " << ptr1.use_count() << '\n';
    std::cout << "ptr1: " << ptr1 << '\n';
    std::cout << "ptr2: " << ptr2 << '\n';
    std::cout << "ptr1[0]: " << ptr1[5] << '\n';
    return 0;
}