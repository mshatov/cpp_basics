//---Заполнение динамического массива (количество элементов вводит пользователь) и поиск min, max, sum, prod---

#include <iostream>

int main(){
    setlocale(0, "");

    std::cout << "\n***Заполнение динамического массива и поиск min, max, суммы, произведения***\n\n";

    int n = 0;
    int min, max;
    int sum = 0;
    double prod = 1;

    std::cout << "\tВведите количество элементов массива: ";
    std::cin >> n;

    int* arr = new int[n]; // Динамический, т.к. кол-во элементов неизвестно заранее.
                           // Статичесикй в этом случае не скомпилируется.

    std::cout << "\n\tВведите числа для заполнения массива:\n";
    for(auto i = 0; i < n; ++i) {
        int num;
        std::cout << "\t\tЧисло №" << i + 1 << " из " << n << ": ";
        std::cin >> num;
        arr[i] = num;
    }

    std::cout << "\n\t\tМассив: [";
    for(auto i = 0; i < n; ++i) {
        if(i != (n - 1)) {
            std::cout << arr[i] << ", ";
        } else {
            std::cout << arr[i] << "]\n";
        }
    }

    min = arr[0];
    max = arr[0];

    for(auto i = 0; i < n; ++i) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
        sum += arr[i];
        prod *= arr[i];
    }

    std::cout << "\n\tМаксимум: " << max;
    std::cout << "\n\tМинимум: " << min;
    std::cout << "\n\tСумма: " << sum;
    std::cout << "\n\tПроизведение: " << prod;
    std::cout << "\n\n";

    delete[] arr;
}
