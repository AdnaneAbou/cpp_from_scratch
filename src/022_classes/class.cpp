#include <iostream>

class Point{
    int x, y;

public: 
    void set(int new_x, int new_y){
        x = new_x;
        y = new_y;
    }
    void print(){
        std::cout << "x: " << x << std::endl;
        std::cout << "y: " << y << std::endl;
    }
};

int main(){
    Point point;
    point.set(10,1);
    point.print();
    return 0;
}