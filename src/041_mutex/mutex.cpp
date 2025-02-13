#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

int counter =0;
std::mutex mtx; // Protects counter

void incerement_safe(){
    for(int i = 0; i < 1000000 ; i++){
        std::lock_guard<std::mutex> lock(mtx);
        counter++;
    }
}
int main(){
    std::mutex m;

    auto print_thread_id = [&m](int id){
        std::lock_guard<std::mutex> lg(m);
        std::cout << "Printing from thread: " << id << "\n";
    };

    std::vector<std::jthread> my_threads;
    for(int i=0; i < 4; i+=1){
        my_threads.emplace_back(print_thread_id,i);
    }

    std::thread t1(incerement_safe);
    std::thread t2(incerement_safe);

    t1.join();
    t2.join();

    std::cout << "Final counter " << counter << std::endl;

    return 0;
}