#include <iostream>

using namespace std;

int main()
{
    long int x;
    //cout << sizeof (x);
    cin >> x;

    int x0 = 0, x1 = 0, x2 = 0, x3 = 0, x4 = 0, x5 = 0, x6 = 0, x7 = 0, x8 = 0, x9 = 0;

    

    if (x > 1000000000){x9 = x / 1000000000;}
    if (x > 100000000) {x8 = x / 100000000 % 10;}
    if (x > 10000000)  {x7 = x / 10000000 % 10;}
    if (x > 1000000)   {x6 = x / 1000000 % 10;}
    if (x > 100000)    {x5 = x / 100000 % 10;}
    if (x > 10000)     {x4 = x / 10000 % 10;}
    if (x > 1000)      {x3 = x / 1000 % 10;}
    if (x > 100)       {x2 = x / 100 % 10;}
    if (x > 10)        {x1 = x / 10 % 10;}
    if (x > 1)         {x0 = x % 10;}

    /*cout << x0 << endl; 
    cout << x1 << endl; 
    cout << x2 << endl; 
    cout << x3 << endl; 
    cout << x4 << endl; 
    cout << x5 << endl; 
    cout << x6 << endl; 
    cout << x7 << endl; 
    cout << x8 << endl; 
    cout << x9 << endl; */

    
    x0 = max(x0, x1);
    x1 = max(x2, x3);
    x2 = max(x4, x5);
    x3 = max(x6, x7);
    x4 = max(x8, x9);

    x0 = max(x0, x1);
    x1 = max(x2, x3);
    x2 = max(x3, x4);

    x0 = max(x0, x1);
    x1 = max(x1, x2);

    x0 = max(x0, x1);

    cout << x0;
    
    cin >> x;
    return 0;
}
