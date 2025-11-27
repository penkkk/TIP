#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cout << "Введите количество задач: ";
    cin >> n;
    vector<int> time(n + 1);
    vector<vector<int>> addiction(n + 1);
    vector<int> finish(n + 1, 0);
    cout << endl;

    for (int i = 1; i < n + 1; i ++)
    {
        cout << "Введите время " << i << " задачи и количество ее зависимостей, а затем преречислите их: ";
        int k;
        cin >> time[i] >> k;
        for (int j = 0; j < k; j ++)
        {   
            int a;
            cin >> a;
            addiction[i].push_back(a);
        }
    }
    for (int i = 1; i < n + 1; i ++)
    {
        int high = 0;
        for (auto j: addiction[i])
        {
            high = max(high, finish[j]);
        }
        finish[i] = time[i] + high;
    }

    int res = 0;
    for (int i = 1; i < n + 1; i ++)
    {
        res = max(res, finish[i]);
    }
    cout << res;
    return 0;
}
