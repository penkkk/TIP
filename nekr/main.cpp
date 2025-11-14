#include <fstream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    ifstream inputStream("input.txt");
    string input;
    getline(inputStream, input);
    inputStream.close();
    string output = "";
    string iskl;
    iskl = "useragmnt";
    for (char c: input)
    {
        c = tolower(c);
        if (iskl.find(c) == string::npos)
        {
            output.push_back(c);
        }
    }
    ofstream outputStream("output.txt");
    outputStream << output;
    return 0;
}
