
#include <iostream>

using namespace std;

int main()
{
    int x;
    cin >> x;
    cout << endl;
    
    int y = 1;
    bool end = 0;
    
    while (end == 0)
    {
        int c = y;
        
        for (int k = 0; k<2; k++)
        {
            c = c*y;
            
        }
        
        
        if (c < x)
        {
            cout << c << endl;
            y++;
        }
        else
        {
            end = 1;
        }
        
        
    }
}
