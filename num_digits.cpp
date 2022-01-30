//---Работа с цифрами числа---

#include <iostream>

bool isPrime (int num) {
    if(num == 0 || num == 1) return false;
    for(auto i = 2; i * i <= num; ++i) {
        if(num % i == 0) {
            return false;
        }
    }
    return true;
}

int main(){
    setlocale(0, "");

    std::cout << "\n***Поиск наименьшей / наибольшей цифры числа***\n";
    std::cout << "\n***Поиск количества четных / нечетных цифр числа***\n";
    std::cout << "\n***Поиск суммы и произведения цифр числа***\n";
    std::cout << "\n***Поиск суммы и произведения четных / нечетных цифр числа***\n";
    std::cout << "\n***Проверка числа на простоту***\n";


    int num, num_copy;

    std::cout << "\t\nВведите число: ";
    std::cin >> num;
    num_copy = num;


    int min = 10;
    int max = -1;

    int even_count = 0;
    int odd_count = 0;

    int sum = 0;
    int odd_sum = 0;
    int even_sum = 0;

    int prod = 1;
    int odd_prod = 1;
    int even_prod = 1;

    while(num) {
        int digit = num % 10;
        num /= 10;

        if(digit < min) {
            min = digit;
        }
        if(digit > max) {
            max = digit;
        }

        if(digit % 2 == 0) {
            ++even_count;
            even_prod *= digit;
            even_sum += digit;
        } else {
            ++odd_count;
            odd_prod *= digit;
            odd_sum += digit;
        }

        sum += digit;
        prod *= digit;
    }

    std::cout << "\n\tНаименьшая цифра: " << min;
    std::cout << "\n\tНаибольшая цифра: " << max << "\n\n";


    std::cout << "\n\tКоличество четных цифр: " << even_count;
    std::cout << "\n\tКоличество нечетных цифр: " << odd_count << "\n\n";

    std::cout << "\n\tСумма четных цифр: " << even_sum;
    std::cout << "\n\tПроизведение четных цифр: " << even_prod << "\n\n";

    std::cout << "\n\tСумма нечетных цифр: " << odd_sum;
    std::cout << "\n\tПроизведение нечетных цифр: " << odd_prod << "\n\n";

    std::cout << "\n\tСумма цифр: " << sum;
    std::cout << "\n\tПроизведение цифр: " << prod << "\n\n";

    isPrime(num_copy) ? std::cout << "\n\tЧисло " << num_copy << " простое\n\n"
                      : std::cout << "\n\tЧисло " << num_copy << " не является простым\n\n";
}
