#include <iostream>
#include <string>
using namespace std;

void foo(int lenghtString, string currentString = "")
{
    if (currentString.length() == lenghtString){ // если длина строки заданой длине, то выводим ее
        cout << currentString << endl;
    }
    else  // если не равна заданной длине то рекурсивно вызываем функцию и добавляем к каждой из строк 0 или 1
    {
    foo(lenghtString, currentString + "0");
    foo(lenghtString, currentString + "1");
    }
}

int main()
{
    int lenghtString;
    cout << "Введите количество чисел в строке: ";
    cin >> lenghtString;
    cout << "=================================" << endl;
    foo(lenghtString);
    return 0;
}
