//---����� min, max �� 3 ����� ����� ������������� ������---

#include <iostream>
#include <array>
#include <algorithm>

int main(){
    setlocale(0, "");

    const int n = 3; // ���������� ��������� �������

    std::array<int, n> arr;

    std::cout << "\n***����� ������������� � ������������ �������� �� 3 �����***\n\n";

    for(auto i = 0; i < 3; ++i) {
        int num;
        std::cout << "\t������� " << i + 1 << " �����: ";
        std::cin >> num;
        arr[i] = num;
    }

    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        return a < b; // a < b - ���������� �� �����������
                      // a > b - ���������� �� ��������
    });

    std::cout << "\n\t����������: " << arr[0];
    std::cout << "\n\t����������: " << arr[n - 1] << "\n\n";
}
