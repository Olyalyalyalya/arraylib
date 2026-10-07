#include "arraylib.h"
#include <iostream>

int main() {
    int data[] = {4, 5, 3, 4, 5, 5, 4, 3, 4, 5};
    const std::size_t n = sizeof(data) / sizeof(data[0]);

    std::cout << "Сумма: " << arr_sum(data, n) << "\n";
    std::cout << "Максимум: " << arr_max(data, n) << "\n";
    std::cout << "Минимум: " << arr_min(data, n) << "\n";
    std::cout << "Среднее: " << arr_average(data, n) << "\n";
    std::cout << "Медиана: " << arr_median(data, n) << "\n";

    return 0;
}