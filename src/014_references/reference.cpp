#include <iostream>


int main(){
    int a =5;
    int &b =a;
    int* ptr = &a;

    b+= 1 ;
    std::cout <<"value a " <<  a<<" \n"; 
    std::cout <<"value of b "<< b << " \n";
    std::cout <<"memory address a " <<  &a<<" \n"; 
    std::cout <<"memory address of b "<< &b << " \n";
    std::cout <<"pointer var value "<< &ptr << " \n";

    return 0;
}