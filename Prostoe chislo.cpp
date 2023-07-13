#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int x;
    cin >> x;
    bool prostoe = 1;

    if(x%2 == 0){
        prostoe = 0;
    }
    for (int i = 3; i < x; i = i+2)
    {
        if(x%i == 0)
        {
            prostoe = 0;
        }
    }
    if(prostoe == 1){
        cout << "число простое" << endl;
    }
    else{
        cout << "число не простое" << endl;
    }
    cin >> x;
}
