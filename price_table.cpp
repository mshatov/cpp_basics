//---Заполнение таблицы стоимости товара---

#include <iostream>
#include <string>

int main(){
    setlocale(0, "");

    std::cout << "***Заполнение таблицы стоимости товара***\n\n";
    std::string item;
    double price, max_qty, sum, fraction;


    std::cout << "\nВведите наименование товара: ";
    std::getline(std::cin, item);

    std::cout << "\nВведите цену товара: ";
    std::cin >> price;


    std::cout << "\nВведите кратность упаковки: ";
    std::cin >> fraction;


    std::cout << "\nВведите максимальное количество: ";
    std::cin >> max_qty;

    std::cout << "\n\tТаблица стоимости товара [" << item << "]\n";
    std::cout << "\n\tЦена\t\tКоличество\tСтоимость\n\n";
    for(auto i = fraction; i <= max_qty; i += fraction) {
        sum = i * price;
        std::cout << "\t" << price << "\t\t" << i << "\t\t" << sum << "\n";
    }
}
