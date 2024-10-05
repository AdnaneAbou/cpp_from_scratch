#include <iostream>
#include <chrono>

struct Point {
    int x;
    int y;

    Point(int new_x, int new_y) : x(new_x), y(new_y) {}

    Point operator+(const Point &p){
        return Point(x + p.x, y + p.y);
    }

    Point operator-(const Point &p){
        return Point(x - p.x, y - p.y);
    }

    // Point operator+=(const Point &p){
    //     x = x + p.x;
    //     y = y + p.y;
    //     return Point(x, y);
    //     // Elapsed time (Method 1 - Return by value): 0.089334 seconds
    // }

    Point& operator+=(const Point &p){
        x = x + p.x;
        y = y + p.y;
        return *this;
        // Elapsed time (Method 1 - Return by value): 0.0345848 seconds
    }
    void print() {
        std::cout << "x = " << x << '\n';
        std::cout << "y = " << y << '\n';
    }
};
int main() {
    Point p1(10, 20);
    Point p2(30, 40);
    // Point p3 = p1.operator+(p2);
    // std::cout << "p1 before : " << &p1 << '\n';
    // // p1.print();
    // p1 += p2;
    // // p1.print();
    // std::cout << "p1 after : " << &p1 << '\n';

    auto start = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < 10000000; ++i) {
        p1 += p2;
    }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;

    std::cout << "Elapsed time (Method 1 - Return by value): " << elapsed.count() << " seconds\n";

    return 0;
}
