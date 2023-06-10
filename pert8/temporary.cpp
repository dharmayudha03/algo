#include <iostream>
#include <vector>

void temporarySort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Tukar elemen terkecil dengan elemen pada indeks i
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
        
        // Menampilkan array setelah setiap sorotan
        std::cout << "Sorotan " << i + 1 << ": ";
        for (int k = 0; k < n; ++k) {
            std::cout << arr[k] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<int> numbers = {5, 2, 9, 1, 3};
    
    std::cout << "Array sebelum diurutkan: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    temporarySort(numbers);
    
    std::cout << "Array setelah diurutkan: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    return 0;
}
