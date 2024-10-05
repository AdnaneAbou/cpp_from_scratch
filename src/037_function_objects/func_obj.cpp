#include <iostream>
#include <vector>
#include <algorithm>

struct IsDivisible{
    int divisor;
    IsDivisible(int new_divisor) : divisor(new_divisor){

    }
    bool operator()(int dividend){
        return dividend % divisor == 0;
    }

};

int main(){
    IsDivisible is_div(10);
    std::vector<int> my_vector = {4,2,5,6,55,4,44,10};
    auto iter = std::ranges::find_if(my_vector,is_div);
    std::cout << "iter memory address : " << &iter << std::endl;
    std::cout << "iter value : " << *iter << std::endl;

    return 0;
}