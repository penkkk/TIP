#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> array = {1, 2, 3, 4, 4 ,8, 3, 5, 1};
    int arraySize = array.size();
    vector<int> sumEven(arraySize, 0);
    for (int i = 0; i < arraySize; i ++)
    {
        if (array[i] % 2 == 0)
        {
            if (i == 0)
            {
                sumEven[i] = array[i];
            }
            else
            {
                sumEven[i] = max(array[i], array[i] + sumEven[i - 1]);
            }
        }
        else 
        {
            sumEven[i] = 0;
        }
    }
    int mx = 0;
    for (int i = 0; i < arraySize; i ++)
    {
        mx = max(mx, sumEven[i]);
    }
    cout << mx;
    return 0;
}           
