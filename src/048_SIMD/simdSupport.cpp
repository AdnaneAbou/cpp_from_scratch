#include <iostream>
#include <string>
#include <cpuid.h> // GCC/Clang (Linux/macOS)
#include<immintrin.h>

void testAvx(){
    __m256 a = _mm256_setr_ps(1.0f, 2.0f, 3.0f, 4.0f, 5.0f, 6.0f, 7.0f, 8.0f);
    __m256 b = _mm256_setr_ps(8.0f, 7.0f, 6.0f, 5.0f, 4.0f, 3.0f, 2.0f, 1.0f);
    __m256 result = _mm256_add_ps(a, b);

    alignas(32) float output[8];
    _mm256_store_ps(output, result);
    std::cout << "AVX Result: ";
    for (float f : output) std::cout << f << " ";
    std::cout << std::endl;
}


void checkSIMDSupport() {
    unsigned int eax, ebx, ecx, edx;

    // Check SSE (SSE4.1 example)
    __get_cpuid(1, &eax, &ebx, &ecx, &edx);
    bool sse41 = (ecx & (1 << 19)) != 0;

    // Check AVX (Bit 28 of ECX for CPUID leaf 1)
    bool avx = (ecx & (1 << 28)) != 0;

    // Check AVX2 (Bit 5 of EBX for CPUID leaf 7)
    __get_cpuid_count(7, 0, &eax, &ebx, &ecx, &edx);
    bool avx2 = (ebx & (1 << 5)) != 0;

    std::cout << "SSE4.1: " << (sse41 ? "YES" : "NO") << std::endl;
    std::cout << "AVX:    " << (avx   ? "YES" : "NO") << std::endl;
    std::cout << "AVX2:   " << (avx2  ? "YES" : "NO") << std::endl;
}

int main() {
    checkSIMDSupport();
    testAvx();
    return 0;
}