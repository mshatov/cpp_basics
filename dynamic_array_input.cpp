//---���������� � ����� ������������� ������� (���������� ��������� ������ ������������)---

#include <iostream>

int main(){
    setlocale(0, "");

    std::cout << "***���������� � ����� ������������� �������***\n\n";

    int n = 0;

    std::cout << "������� ���������� ��������� �������: ";
    std::cin >> n;

    int* arr = new int[n]; // ������������, �.�. ���-�� ��������� ���������� �������.
                           // ����������� � ���� ������ �� ��������������.

    std::cout << "\n������� ����� ��� ���������� �������:\n";
    for(auto i = 0; i < n; ++i) {
        int num;
        std::cout << "����� �" << i + 1 << " �� " << n << ": ";
        std::cin >> num;
        arr[i] = num;
    }

    std::cout << "\n������: [";
    for(auto i = 0; i < n; ++i) {
        if(i != (n - 1)) {
            std::cout << arr[i] << ", ";
        } else {
            std::cout << arr[i] << "]\n";
        }
    }

    delete[] arr;
}
