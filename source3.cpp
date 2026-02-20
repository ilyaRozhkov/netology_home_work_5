#include <iostream>
#include <windows.h>


int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arr[3][6] = { 
        {1, 2, 3, 4, 5, 6},
        {7, 8, 9, 10, 11 ,12},
        {13, 14, 15, 16, 17, 18}
    };
    int min = arr[0][0];
    int max = arr[0][0];

    int minIndex[2] = { 0, 0 };
    int maxIndex[2] = { 0, 0 };

    std::cout << "Массив: "<< '\n';
    for (int i = 0; i < 3; i++) {

        for (int j = 0; j < 6; j++) {
            std::cout << arr[i][j] << '\t';

            if (min > arr[i][j]) {
                min = arr[i][j];

                minIndex[0] = i;
                minIndex[1] = j;
            }
            if (max < arr[i][j]) {
                max = arr[i][j];

                maxIndex[0] = i;
                maxIndex[1] = j;
            }


        }
        std::cout << '\n';
    }

    std::cout << '\n' << "Индекс минимального элемента: " << minIndex[0] << ' ' << minIndex[1] << '\n';
    std::cout << '\n' << "Индекс максимального элемента: " << maxIndex[0] << ' ' << maxIndex[1] << '\n';
    return 0;
}
