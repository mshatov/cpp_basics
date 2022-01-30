//---Поиск min, max, sum, product из чисел в потоке (количество чисел неизвестно заранее)---

#include <iostream>

int main(){
    setlocale(0, "");

    std::cout << "\n***Поиск min, max, суммы, произведения из чисел в потоке***\n\n";

    std::cout << "\tВводите числа...\n";
    std::cout << "\t*для завершения - введите 0 и нажмите Enter*\n\n";

    int min, max, num;
    int sum = 0;
    double prod = 1;
    int counter = 1;

    while(true) {
        std::cout << "\t\tВведите число №" << counter << " и нажмите Enter: ";
        std::cin >> num;
        if(counter == 1) {
            min = num;
            max = num;
        }
        ++counter;

        if(num == 0) break;

        if(num < 0) {
            std::cout << "\n\t\tОтрицательное! Пропускаем!\n\n";
            --counter;
            continue;
        }

        if(num > max) {
            max = num;
        }
        if(num < min) {
            min = num;
        }
        sum += num;
        prod *= num;
    }

    std::cout << "\n\tВсего введено чисел: " << counter - 2;
    std::cout << "\n\tМаксимум: " << max;
    std::cout << "\n\tМинимум: " << min;
    std::cout << "\n\tСумма: " << sum;
    std::cout << "\n\tПроизведение: " << prod;
    std::cout << "\n\n";
}
