#include <fstream>

int main() {
    std::ofstream output("data.txt");
    for(int i=0; i < 10; i++) {
        output << i * i << " \n";
    }
    output << " \n";
    return 0;
}
