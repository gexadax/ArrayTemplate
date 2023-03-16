#include <iostream>
#include "array.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    // Создание массива целых чисел и заполнение его значениями
    Array<int> intArray(10);
    cout << "Создание массива целых чисел и заполнение его значениями" << "\n" << endl;
    for (int count = 0; count < intArray.getSize(); ++count)
        intArray[count] = count;

    for (int count = 0; count < intArray.getSize(); ++count)
        cout << intArray[count] << " ";
    cout << endl;


    // Создание массива вещественных чисел и вывод его значений
    Array<double> doubleArray(10);
    cout << "Создание массива вещественных чисел и вывод его значений" << "\n" << endl;
    for (int count = 0; count < doubleArray.getSize(); ++count)
        doubleArray[count] = count + 0.5;
    for (int count = 0; count < doubleArray.getSize(); ++count)
        cout << doubleArray[count] << " ";

    return 0;
}