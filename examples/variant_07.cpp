#include "arraylib.h"
#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    int grades[] = {4, 5, 3, 4, 5, 5, 4, 3, 4, 5};
    const std::size_t n = sizeof(grades) / sizeof(grades[0]);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Количество оценок: " << n << "\n";
    std::cout << "Средняя оценка: " << arr_average(grades, n) << "\n";
    std::cout << "Максимальная оценка: " << arr_max(grades, n) << "\n";
    std::cout << "Минимальная оценка: " << arr_min(grades, n) << "\n";

    int fives = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (grades[i] == 5) ++fives;
    }
    std::cout << "Количество пятёрок: " << fives << "\n";

    int below4 = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (grades[i] < 4) ++below4;
    }
    std::cout << "Оценок ниже 4: " << below4 << "\n";

    std::cout << "Медиана оценок: " << arr_median(grades, n) << "\n";

    return 0;
}
