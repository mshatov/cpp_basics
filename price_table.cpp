//---���������� ������� ��������� ������---

#include <iostream>
#include <string>

int main(){
    setlocale(0, "");

    std::cout << "***���������� ������� ��������� ������***\n\n";
    std::string item;
    double price, max_qty, sum, fraction;


    std::cout << "\n������� ������������ ������: ";
    std::getline(std::cin, item);

    std::cout << "\n������� ���� ������: ";
    std::cin >> price;


    std::cout << "\n������� ��������� ��������: ";
    std::cin >> fraction;


    std::cout << "\n������� ������������ ����������: ";
    std::cin >> max_qty;

    std::cout << "\n\t������� ��������� ������ [" << item << "]\n";
    std::cout << "\n\t����\t\t����������\t���������\n\n";
    for(auto i = fraction; i <= max_qty; i += fraction) {
        sum = i * price;
        std::cout << "\t" << price << "\t\t" << i << "\t\t" << sum << "\n";
    }
}
