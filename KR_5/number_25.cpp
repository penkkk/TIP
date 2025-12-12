#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    map<string, string> arr
    {
        {"a", "b"},
        {"b", "c"},
        {"c", "nullptr"}
    };
    if (arr.size() <= 1)
    {
        cout << "зацикливания нет";
    }
    int len = arr.size();
    vector<string> visit;
    string cur = "a"; // узел откуда начинаем проход
    while (cur != "nullptr")
    {
        if (find(visit.begin(), visit.end(), cur) != visit.end())
        {
            cout << "есть зацикливание";
            return 0;
        }
        visit.push_back(cur);
        cur = arr.at(cur);
    }
    cout << "зацикливания нет";
}
