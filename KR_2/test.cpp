#include <iostream>
using namespace std;

int nod(int a, int b)
{
    int c = max(a, b);
    int d = min(a, b);
    if (c % d == 0){
        return d;
    }
    else {
        return nod(c, c-d);
    }
}

int main()
{
    cout << nod(12,9);
    return 0;
}
