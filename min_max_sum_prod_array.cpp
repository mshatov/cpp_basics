//---���������� ������������� ������� (���������� ��������� ������ ������������) � ����� min, max, sum, prod---

#include <iostream>

int main(){
    setlocale(0, "");

    std::cout << "\n***���������� ������������� ������� � ����� min, max, �����, ������������***\n\n";

    int n = 0;
    int min, max;
    int sum = 0;
    double prod = 1;

    std::cout << "\t������� ���������� ��������� �������: ";
    std::cin >> n;

    int* arr = new int[n]; // ������������, �.�. ���-�� ��������� ���������� �������.
                           // ����������� � ���� ������ �� ��������������.

    std::cout << "\n\t������� ����� ��� ���������� �������:\n";
    for(auto i = 0; i < n; ++i) {
        int num;
        std::cout << "\t\t����� �" << i + 1 << " �� " << n << ": ";
        std::cin >> num;
        arr[i] = num;
    }

    std::cout << "\n\t\t������: [";
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

    std::cout << "\n\t��������: " << max;
    std::cout << "\n\t�������: " << min;
    std::cout << "\n\t�����: " << sum;
    std::cout << "\n\t������������: " << prod;
    std::cout << "\n\n";

    delete[] arr;
}
