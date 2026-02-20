#include <iostream>
#include <windows.h>


int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arr[10] = { 10, 3, 4, 1, 8, 9, 7, 2, 6, 5 };
    int n = 10;

    std::cout << "Массив до сортировки: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    for (int i = 0; i < n - 1; i++) {

        for (int j = n - 1; j > i; j--) {

            if (arr[j] < arr[j - 1]) {

                int temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;

            }
        }
    }

    std::cout << '\n' << "Массив после сортировки: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
