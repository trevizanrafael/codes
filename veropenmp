#include <iostream>
#include <vector>
#include <omp.h>
#include <chrono>

int main() {
    std::vector<int> vector(100000000, 1);
    int soma = 0;
    
    for(int j=0;j<30;j++)
    {
    auto start = std::chrono::high_resolution_clock::now();
    #pragma omp parallel for reduction(+:soma)
        for (int i = 0; i < 100000000; i++) 
        {
            soma += vector[i];
        }
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> duration = end - start;
    std::cout << "a soma total é: \n" << soma << std::endl;
    std::cout << "tempo de execução paralela com open: " << duration.count() << " ms" << std::endl;
    soma=0;
    }

    return 0;
}
