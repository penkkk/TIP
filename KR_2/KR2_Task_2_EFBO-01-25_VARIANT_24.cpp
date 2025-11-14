#include <iostream>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    int** arr = new int*[a];
    for (int i = 0; i < a; i++)
    {
        arr[i] = new int[b];
    }
    for (int i = 0; i < a; i ++){
        for (int j = 0; j < b; j ++){
            arr[i][j] = rand() % 10;
        }    
    }
    for (int i = 0; i < a; i ++){
        for (int j = 0; j < b; j ++){
            cout << arr[i][j] << " ";
        }   
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < a; i ++){
        for (int j = 0; j + 2 < b; j += 2){
            int current = arr[i][j];
            arr[i][j] = arr[i][j + 2];
            arr[i][j + 2] = current;
        }
    }
    for (int i = 0; i < a; i ++){
        for (int j = 0; j < b; j ++){
            cout << arr[i][j] << " ";
        }   
        cout << endl;
    }
    return 0;
}
