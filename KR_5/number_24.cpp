#include <iostream>
#include <map>
#include <sstream>
#include <string>

using namespace std;

int main()
{
    string text;
    string helpWord;
    map<string, int> countWords;
    getline(cin, text);
    stringstream s(text);
    while (s >> helpWord)
    {
        if (countWords.count(helpWord))
        {
            countWords[helpWord] += 1;
        }
        else
        {
            countWords.insert({helpWord, 1});
        }
    }
    int count = 0;
    count = countWords.size();
    cout << count;
    return 0;
}
