#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    int result = 1;

    while(x > 0)
    {
        result = result * x;
        x--;
    }

    cout << result << endl;

    cin >> x;
}
