#include <iostream>
#include <array>


int array_sum(std::array<int,3> array){
    int sum = 0;
    for (int value : array){
        sum += value; 
    }
    return sum;

}

main(){

    std::array<int,3> array_1 = {1,5,3};
    int sum = array_sum(array_1);
    std::cout << "sum = " << sum << std::endl;
    return 0;

}
