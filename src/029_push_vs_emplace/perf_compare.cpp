#include <iostream>
#include <vector>
#include <utility>
#include <chrono>

struct Point {
    int x;
    int y;

    Point(int new_x, int new_y):x(new_x), y(new_y){
        std::cout << " Constructor" << std::endl;
    }
    Point( const Point& p ){
        std::cout << " Copy constructor" << std::endl;
    }

    Point(Point &&p ){
        std::cout << "Move Constructor" << std::endl;
    }   
};

void print(const Point &p) {
    std::cout << "x: " << p.x << std::endl;
    std::cout << "y: " << p.y << std::endl;        
}
// push_back 
// Copy constructor
// Elapsed time (Method 1 - Return by value): 0.0010011 seconds

// Move Constructor
// Elapsed time (Method 1 - Return by value): 0.0010275 seconds

//  Constructor
// Elapsed time (Method 1 - Return by value): 0.0004998 seconds
int main(){
    // Point point(10,30);
    // print(point);
    std::vector<Point> my_vector;
    auto start = std::chrono::high_resolution_clock::now();
    my_vector.emplace_back(10,30);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Elapsed time (Method 1 - Return by value): " << elapsed.count() << " seconds\n";

    return 0;
}