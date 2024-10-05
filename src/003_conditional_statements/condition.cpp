#include <iostream>

int main(){
    int b = 10;
    int a = 10;

    if ( a < b){
        std::cout << " a is less than b\n" << std::endl;
    } else if ( a == b ){
        std::cout << " a is equal to b\n" << std::endl;}
        else {
        std::cout << " a is greater or equal than b\n" << std::endl;
    }

    return 0;
}