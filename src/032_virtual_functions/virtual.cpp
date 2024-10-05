#include <iostream>


struct Animal{
    virtual void speak(){
        std::cout << "Default speak function" << std::endl;
    }

};

struct Dog : Animal{
    void speak() override {
        std::cout << "HOW HOW HOW " << std::endl;
    };
};

struct Cat : Animal{
    void speak() override {
        std::cout << "MOew moew " << std::endl;
    };
};
int main(){
    Dog myDog;
    myDog.speak();
    Cat myCat;
    myCat.speak();

    Animal &d= myDog;
    Animal &c= myCat;
    d.speak();
    c.speak();
    return 0;
}