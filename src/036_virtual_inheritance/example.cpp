#include <iostream>

struct A{
    A(){
        std::cout << "Constructing A" << std::endl;
    }
};

struct B : virtual A {
    B(){
        std::cout << "Constructing B" << std::endl;
    }
};

struct C : virtual A{
    C(){
        std::cout << "Constructing C" << std::endl;
    }
};

struct D : B,C {
    D(){
        std::cout << "Constructing D" << std::endl;
    }
};

int main() {
    D d;
    A &a = d;
    return 0;
}