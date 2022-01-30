//---Заполнение и вывод статического массива (количество элементов известно заранее)---

#include <iostream>

int main(){
    setlocale(0, "");

    std::cout << "***Заполнение и вывод статического массива***\n\n";

    const int n = 10; // количество элементов массива

    int arr[n];

    std::cout << "Введите числа для заполнения массива:\n";
    for(auto i = 0; i < n; ++i) {
        int num;
        std::cout << "Число №" << i + 1 << " из " << n << ": ";
        std::cin >> num;
        arr[i] = num;
    }

    std::cout << "\nМассив: [";
    for(auto i = 0; i < n; ++i) {
        if(i != (n - 1)) {
            std::cout << arr[i] << ", ";
        } else {
            std::cout << arr[i] << "]\n";
        }
    }
}
