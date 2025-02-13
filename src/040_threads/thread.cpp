#include<iostream>
#include<thread>

void calculation(){
    std::cout << "Thread 1 : Calculations ...\n";
}

void write_to_file(){
    std::cout << "Thread 2 : File writing ...\n";
}

int counter = 0 ; // shared resource , sotred on stack (static variable)
void increment_unsafe(){
    for(int i = 0; i < 1000000; i++){
        counter++;
    }
}
int main() {
    std::thread t1(calculation);
    std::thread t2(write_to_file);
    std::thread t3(increment_unsafe);
    std::thread t4(increment_unsafe);
    
    std::cout << "Thread 1 ID "<< t1.get_id() << '\n';
    std::cout << "Thread 2 ID "<< t2.get_id() << '\n';
    std::cout << "Thread 3 ID "<< t3.get_id() << '\n';
    
    t1.join();
    t2.join();
    t3.join();

    std::cout << "Final counter" << counter << std::endl;

    return 0;
}