#include <iostream>
#include <string>
using namespace std;

int countGlas(string s){ // функция которая принимает строку s, возвращает количество гласных в ней
    int c = 0; // пременная для подсчета гласных
    for (char sym: s){ // проходися по каждому символу в строке
        sym = tolower(sym); // преврщаем симвлом в строчную букву
        if ((sym == 'e') or (sym == 'y') or (sym == 'u') or (sym == 'i') or (sym == 'o') or (sym == 'a')){ // условие для проверки является ли символ гласной(будем считать что Y гласная)
            c ++; // увеличсивем счетчик
            }
        }
        return c;
    }


int main(){
    cout << countGlas("HEellOoo823871 World"); // проверяем нашу функцию
}
