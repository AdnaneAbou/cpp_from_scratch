#include<iostream>
#include<thread>

void calculation(){
    std::cout << "Thread 1 : Calculations ...\n";
}

void write_to_file(){
    std::cout << "Thread 2 : File writing ...\n";
}
int main() {
    std::thread t1(calculation);
    std::thread t2(write_to_file);

    std::cout << "Thread 1 ID "<< t1.get_id() << '\n';
    std::cout << "Thread 2 ID "<< t2.get_id() << '\n';

    t1.join();
    t2.join();


    return 0;
}