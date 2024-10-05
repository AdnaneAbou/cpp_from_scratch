#include <iostream>

struct Point{
   int x;
   int y;

    Point() = default;
    Point(int new_x, int new_y) : x(new_x), y(new_y){}

    void print(){
        std::cout << "x: " << x << std::endl;
        std::cout << "y: " << y << std::endl;
    }
};

int main(){
    Point point;
    point.print();
    return 0;
}