#include <iostream>

struct Point {
    int x;
    int y;

    Point(int new_x, int new_y) : x(new_x), y(new_y) {
        std::cout << "Constructor" << std::endl;
    }
};

// Define a standalone print function
void print(const Point& point) {
    std::cout << "Point(" << point.x << ", " << point.y << ")" << std::endl;
}

int main() {
    Point p1(3, 4);
    print(p1);  // Output: Point(3, 4)
    return 0;
}
