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

int main(){
    Point p1(10,20);
    Point p2(102,20);
    p2.print();
    p1.print();
    Point p3 = p1;
    p3.print();
    return 0;
}