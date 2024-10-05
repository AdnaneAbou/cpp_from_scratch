#include <iostream>
#include <memory>

struct IntArray{
    std::unique_ptr<int[]> array;
    IntArray(int size) : array(std::make_unique<int[]>(size)){}

};

int main(){
    IntArray arr(10);
    arr.array[0]= 100;
    std::cout << arr.array[0] << std::endl;
    return 0;
}