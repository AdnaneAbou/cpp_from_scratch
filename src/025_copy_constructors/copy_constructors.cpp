#include <iostream>

struct Point {
    int x, y;
    Point(int new_x, int new_y): x(new_x),y(new_y){}
    Point(const Point &p): x(p.x),y(p.y){
        std::cout << " Running copy constructor" << std::endl;
    }


    void print(){
        std::cout << "x: " << x << std::endl;
        std::cout << "y: " << y << std::endl;

    }
};
class MyClass {
public:
    MyClass(int x) { /* ... */ }
};

void doSomething(MyClass obj) { /* ... */ }

int main(){

    doSomething(42); // ERROR! Compiler won't automatically convert 42 to MyClass. ' explicit Myclass(int x){}'
    doSomething(MyClass(42)); // OK, you explicitly create a MyClass object.

    Point p1(10,20);
    Point p2(102,20);
    p2.print();
    p1.print();
    Point p3 = p1;
    p3.print();
    
    return 0;
}