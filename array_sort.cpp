//---Сортировка массива---

#include <iostream>
#include <array>
#include <algorithm>

int main(){
    setlocale(0, "");

    const int n = 10; // количество элементов массива

    std::array<int, n> arr = {5, 7, 45, 2, 8, 6, 23, 34, 0, 3};

    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        return a < b; // a < b - сортировка по возрастанию
                      // a > b - сортировка по убыванию
    });

    std::cout << "Отсортированный массив:\n";
    for(auto i = 0; i < n; ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << "\n";
    }
}
