//---������ � ������� �����---

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

    std::cout << "\n***����� ���������� / ���������� ����� �����***\n";
    std::cout << "\n***����� ���������� ������ / �������� ���� �����***\n";
    std::cout << "\n***����� ����� � ������������ ���� �����***\n";
    std::cout << "\n***����� ����� � ������������ ������ / �������� ���� �����***\n";
    std::cout << "\n***�������� ����� �� ��������***\n";


    int num, num_copy;

    std::cout << "\t\n������� �����: ";
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

    std::cout << "\n\t���������� �����: " << min;
    std::cout << "\n\t���������� �����: " << max << "\n\n";


    std::cout << "\n\t���������� ������ ����: " << even_count;
    std::cout << "\n\t���������� �������� ����: " << odd_count << "\n\n";

    std::cout << "\n\t����� ������ ����: " << even_sum;
    std::cout << "\n\t������������ ������ ����: " << even_prod << "\n\n";

    std::cout << "\n\t����� �������� ����: " << odd_sum;
    std::cout << "\n\t������������ �������� ����: " << odd_prod << "\n\n";

    std::cout << "\n\t����� ����: " << sum;
    std::cout << "\n\t������������ ����: " << prod << "\n\n";

    isPrime(num_copy) ? std::cout << "\n\t����� " << num_copy << " �������\n\n"
                      : std::cout << "\n\t����� " << num_copy << " �� �������� �������\n\n";
}
