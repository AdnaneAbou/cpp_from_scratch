#include <numeric>
#include <vector>
#include <iostream>
#include <chrono>
#include <execution>

int main(){

    auto start = std::chrono::high_resolution_clock::now(); 
    std::vector<int> my_vector( 1 << 30); // Elapsed time (Method 1 - Return by value): 9.47393 seconds
    auto r = std::reduce(std::execution::par_unseq,my_vector.begin(), my_vector.end(),0);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> elapsed = end - start;
    std::cout << "Elapsed time (Method 1 - Return by value): " << elapsed.count() << " seconds\n";

    return r;
}