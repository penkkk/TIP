#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> squad;
    for (int i = 1; i * i <= n; i++)
    {
        squad.push_back(i*i);
    }
    vector<int> result(n + 1);
    result[0] = 1;
    for (int i: squad)
    {
        for (int j = i; j <= n; j ++)
        {
            result[j] += result[j - i];
        }
    }
    cout << endl;
    cout << result[n];
    return 0;
}
