//---����� min, max, sum, product �� ����� � ������ (���������� ����� ���������� �������)---

#include <iostream>

int main(){
    setlocale(0, "");

    std::cout << "\n***����� min, max, �����, ������������ �� ����� � ������***\n\n";

    std::cout << "\t������� �����...\n";
    std::cout << "\t*��� ���������� - ������� 0 � ������� Enter*\n\n";

    int min, max, num;
    int sum = 0;
    double prod = 1;
    int counter = 1;

    while(true) {
        std::cout << "\t\t������� ����� �" << counter << " � ������� Enter: ";
        std::cin >> num;
        if(counter == 1) {
            min = num;
            max = num;
        }
        ++counter;

        if(num == 0) break;

        if(num < 0) {
            std::cout << "\n\t\t�������������! ����������!\n\n";
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

    std::cout << "\n\t����� ������� �����: " << counter - 2;
    std::cout << "\n\t��������: " << max;
    std::cout << "\n\t�������: " << min;
    std::cout << "\n\t�����: " << sum;
    std::cout << "\n\t������������: " << prod;
    std::cout << "\n\n";
}
