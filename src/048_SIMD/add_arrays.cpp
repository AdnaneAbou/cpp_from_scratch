#include<immintrin.h>
#include<iostream>

void add_arrays(float* a, float* b, float* result , int size){
    for(int i =0; i < size ; i += 8){ // Process 8 floats per iteration (AVX)
        __m256 vec_a = _mm256_loadu_ps(&a[i]); // Load 8 Floats
        __m256 vec_b = _mm256_loadu_ps(&b[i]);
        __m256 vec_sum = _mm256_add_ps(vec_a,vec_b); // SIMD add
        _mm256_storeu_ps(&result[i],vec_sum);
    }
}

int main(){
    const int size = 16;  // Must be a multiple of 8 for AVX
    float a[size] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f,
                    1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f};
    float b[size] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f,
                    1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f};
    float result[size] = {0}; 
    add_arrays(a,b,result,size);
    std::cout << "Result : ";
    for(int i=0; i< size; i++){
        std::cout << result[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}
