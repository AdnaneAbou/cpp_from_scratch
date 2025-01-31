#include<immintrin.h>
#include<iostream>

using namespace std;

float dot_product(float* a,float* b, int size){
    __m256 sum = _mm256_setzero_ps();
    for(int i=0;i < size ; i += 8 ){
        __m256 vec_a = _mm256_loadu_ps(&a[i]);
        __m256 vec_b = _mm256_loadu_ps(&b[i]);
        sum = _mm256_fmadd_ps(vec_a,vec_b,sum); // sum += a[i] * b[i]
    }
    // Horizontal sum of the 8 elements in 'sum':
    __m128 low = _mm256_extractf128_ps(sum, 0);
    __m128 high = _mm256_extractf128_ps(sum, 1);
    low = _mm_add_ps(low, high);
    __m128 shuf = _mm_shuffle_ps(low ,low, _MM_SHUFFLE(2,3,0,1));
    low = _mm_add_ps(low ,shuf);
    shuf = _mm_movehl_ps(shuf , low);

    return _mm_cvtss_f32(_mm_add_ss(low,shuf));
}

int main(){
    const int size = 16;  // Must be a multiple of 8 for AVX
    float a[size] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f,
                    1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f};
    float b[size] = {1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f,
                    1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f};

    // Compute dot product
    float result = dot_product(a, b, size);

    // Print the result
    std::cout << "Dot product: " << result << std::endl;
    return 0;
}