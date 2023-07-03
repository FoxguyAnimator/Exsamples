#include <iostream>
#include <locale.h>
#include <math.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int h = 3;
    int w = 3;
    int arr[h][w];
    //ввод данных
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            cin >> arr[i][j];
        }
    }
    //
    int result = 0;
    //калькуляция горизонтальных значений
    for (int i = 0; i < h; i++)
    {
        for (int j = 0; j < w; j++)
        {
            result = result + arr[i][j];
            cout << arr[i][j] << "  ";
            //cout << arr[i][j] << " ";
        }
        cout << "  " << result << endl;
        result = 0;
        //cout << endl;
    }
    //калькуляция вертикальных значений
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < h; j++)
        {
            result = result + arr[j][i];
            //cout << arr[i][j] << " ";
        }
        cout << result << " ";
        result = 0;
        //cout << endl;
    }
    cin >> h;
}
