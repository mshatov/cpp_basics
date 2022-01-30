//---���������� �������---

#include <iostream>
#include <array>
#include <algorithm>

int main(){
    setlocale(0, "");

    const int n = 10; // ���������� ��������� �������

    std::array<int, n> arr = {5, 7, 45, 2, 8, 6, 23, 34, 0, 3};

    std::sort(arr.begin(), arr.end(), [](int a, int b) {
        return a < b; // a < b - ���������� �� �����������
                      // a > b - ���������� �� ��������
    });

    std::cout << "��������������� ������:\n";
    for(auto i = 0; i < n; ++i) {
        std::cout << "arr[" << i << "] = " << arr[i] << "\n";
    }
}
