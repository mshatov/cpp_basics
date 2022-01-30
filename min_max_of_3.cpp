//---Поиск min, max из 3 чисел через сортированный массив---

#include <iostream>
#include <array>
#include <algorithm>

int main(){
    setlocale(0, "");

    const int n = 3; // количество элементов массива

    std::array<int, n> arr;

    std::cout << "\n***Поиск максимального и минимального значения из 3 чисел***\n\n";

    for(auto i = 0; i < 3; ++i) {
        int num;
        std::cout << "\tВведите " << i + 1 << " число: ";
        std::cin >> num;
        arr[i] = num;
    }

    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        return a < b; // a < b - сортировка по возрастанию
                      // a > b - сортировка по убыванию
    });

    std::cout << "\n\tНаименьшее: " << arr[0];
    std::cout << "\n\tНаибольшее: " << arr[n - 1] << "\n\n";
}
