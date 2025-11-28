#include <iostream>
#include <fstream>
#include <string>
using namespace std;


int main()
{
    ifstream inputStream("input2.txt"); // поток на ввод
    string s;
    getline(inputStream, s); // считываем в s строку из файла
    inputStream.close(); // закрываем поток 
    string reversS = ""; // пустая строка - в нее запишем переврнутую строку s
    for (int i = s.length() - 1; i >= 0; i --) // цикл для переворота строки
    {
        reversS += s[i];
    }
    if (s == reversS) // если строки одинаковы то строка палиндром
    {
        cout << "Строка является палиндромом" << endl;
    }
    else // если нет, то не палиндром
    {
        cout << "Строка не является палиндромом" << endl;
    }
    return 0;
}
