#include <iostream>
#include <windows.h>


int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int size = 10;
    int arr[size] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int min = arr[0];
    int max = arr[0];
    
    std::cout << "Массив: ";
    for (int i = 0; i < size; i++)
    {
                std::cout << arr[i] << ' ';
        if (min > arr[i]) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    std::cout << '\n' << "Минимальный элемент: " << min ;
    std::cout << '\n' << "Максимальный элемент: " <<max;
    return 0;
}
