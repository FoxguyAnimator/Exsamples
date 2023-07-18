#include <iostream>
#include <locale.h>
#include <math.h>
#include <list>
#include <vector>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    int arrsize;
    cin >> arrsize;
    vector<int> itog(10);
    int counter = 0;

    list<int> numbers;

    for(int i = 0; i <arrsize; i++)
    {
        int x;
        cin >> x;
        numbers.push_back(x);
    }
    for(int i = 0; i < arrsize; i++)
    {
        bool flag = 0;
        for(int j = 0; j <= counter; j++)
        {
            if(numbers.front() == itog[j])
            {
                flag = 1;
            }
        }
        if (flag == 0)
        {
            itog [counter] = numbers.front();
            counter++;
        }
        numbers.pop_front();
    }

    for (int i = 0; i < arrsize; i++)
    {
        cout << itog[i] << " ";
    }
    cout << endl;
    cout << counter << endl;

    system("pause");
}
