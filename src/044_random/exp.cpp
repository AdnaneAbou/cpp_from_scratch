#include <iostream>
#include <random>

int main(){
    std::random_device rd;
    std::mt19937 m(rd());
    std::uniform_int_distribution normal(1,5);
    for(int i=0; i< 10; i+= 1){
        std::cout << normal(m) << ' ';
    }
    return 0;
}