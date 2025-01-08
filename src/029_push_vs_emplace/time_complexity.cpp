#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<int> my_vector;
    int a = 10 ;
    my_vector.emplace_back(a);
    my_vector.push_back(1);
    cout << "1st element "<< (my_vector.at(0)) << endl;
    cout << "Memory address of my_vector "<< &(my_vector) << endl;
    cout << "Size : "<< my_vector.capacity() ;
    for(int i= 0 ; i <= 10 ;i++ ){
        cout << "Memory address of 1st element "<< &(my_vector.at(0)) << endl;
        cout << "Memory address of my_vector "<< &(my_vector) << endl;
        cout << "Size : "<< my_vector.size() << "  Capacity: "<< my_vector.capacity() << endl;     
        my_vector.emplace_back(i);

    }

    return 0;
}