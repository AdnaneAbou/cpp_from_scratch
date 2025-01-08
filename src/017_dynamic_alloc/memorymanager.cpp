#include<iostream>

class MemoryManager {
private:
    int* ptr;
public:
    MemoryManager(size_t size){
        ptr = new int[size];
        std::cout << "Memory allocated!\n";
    }

    // Destructor
    ~MemoryManager(){
        delete[] ptr;
        std::cout << "Memory Freed! \n";
    }

    int* get(){
        return ptr;
    }


};

int main(){

    MemoryManager manager(10);
    manager.get()[0] = 42 ;
    
    std::cout << "Value: " << manager.get()[0] << std::endl;
    
    return 0;
}