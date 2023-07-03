#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int amount_of_num = 8;
    int result = 0;
    int x[amount_of_num]= {52,65,13,95,86,43,56,23};
    //cout << sizeof (x);
    for(int i = 0; i <amount_of_num; i++)
    {
        if (x[i]%10 == 3)
        {
            result = x[i] + result;
        }
    }
    cout << result << endl;
    cin >> result;
}
