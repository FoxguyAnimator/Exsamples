#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int counter = 10;

    int x[counter];
    for(int i = 0; i < counter; i++) {
        cin >> x[i];
    }

    for(int i = 0; i < counter; i++) {
        for(int j = i; j < counter; j++) {
            if (x[i] > x[j]){
                int y = x[i];
                x[i] = x[j];
                x[j] = y;
            }
        }
    } 

    for(int i = 0; i < counter; i++) {
        cout << x[i] << " ";
    }

    cin >> counter;
}
