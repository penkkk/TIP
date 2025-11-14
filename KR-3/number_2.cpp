#include <iostream>
#include <fstream>
#include <vector> // для динамического массива
#include <algorithm> // для sort
using namespace std;


int main()
{
    ifstream inputStream("input.txt"); // поток на ввод
    vector<int> arr; //динамический массив для хранения чисел из файла
    int n;
    while (inputStream >> n){ // пока в файле можем считывать числа считываем и добавляем в конец массива
        arr.push_back(n);
    }
    inputStream.close(); //закрываем поток 
    int lengthArray; // переменная для длины массива
    lengthArray = arr.size(); // длина массива 
    sort(arr.begin(), arr.end()); // сортируем от начала до конца 
    double mediana; // переменная медианы
    if (lengthArray % 2 == 1) // если длина не четная
    {
        mediana = arr[lengthArray  / 2]; // медиана - число в центре списка
    }
    else {
        mediana = (arr[(lengthArray / 2) - 1] + arr[lengthArray / 2]) / 2.0; // медиана среднеариф. двух чисел в середине 
    }
    ofstream outputStream("output.txt"); // открываем поток на вывод
    outputStream << mediana; // передаем в файл значение медианы
    outputStream.close(); // закрываем поток
    return 0;
}
