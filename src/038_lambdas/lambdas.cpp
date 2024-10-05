#include <algorithm>
#include <iostream>
#include <vector>

// int main() {
//     auto is_divisable_by_10 = [divisor=10](int dividend) {
//         return dividend % divisor == 0;
//     };
//     std::vector<int> my_vector = {41, 20, 84, 94, 23};
//     auto itr = std::ranges::find_if(my_vector, is_divisable_by_10);
//     std::cout << *itr << '\n';
//     return 0;
// }


int main(){
    auto is_div = [divisor=10](int dividend) { 
        return dividend % divisor == 0 ;
    };
    std::vector<int> my_vector = {41,10, 20, 84, 94, 23};
    auto otr = std::ranges::find_if(my_vector, is_div);
    std::cout << *otr << '\n';
    return 0;
}