#include <iostream>

struct Point {
    int x;
    int y;

    void print(){
        std::cout << "x: " << x << std::endl;
        std::cout << "y: " << y << std::endl;
    }
};

int main(){
    Point point;
    point.x = 7;
    point.y = 10;
    point.print();
    return 0;
}