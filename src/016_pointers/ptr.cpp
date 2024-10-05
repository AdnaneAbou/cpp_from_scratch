#include <iostream>




int main(){
        
    int a = 1;
    int b;
    int* px;
    
    px = &a;   /* point pointer to variable a */
    b = *px;   /* copy value where px points to into b */
    
    a = 10;
    std::cout << a <<" "<< &a<<'\n' ;     
    std::cout << &px<< '\n';   
    std::cout << *px<< '\n';   
    std::cout << px<< '\n';   
    std::cout << b<< " "<< &b<<'\n' ;     

    return 0;
}