#include <iostream>
#include <locale.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    long int x;
    //cout << sizeof (x);
    cin >> x;



    if (x > 999999999)   {cout << "это десятизначное ";} 
    else{
        if (x > 99999999)   {cout << "это девятизначное ";}
        else{
            if (x > 9999999)   {cout << "это восьмизначное";} 
            else{
                if (x > 999999)    {cout << "это семизначное ";} 
                else{
                    if (x > 99999)     {cout << "это шестизначное ";} 
                    else{
                        if (x > 9999)      {cout << "это пятизначное ";} 
                        else{
                            if (x > 999)     {cout << "это четырехзначное ";}   
                            else{
                                if (x > 99)         {cout << "это трехзначное ";} 
                                else{
                                    if (x > 9)          {cout << "это двухзначное ";} 
                                    else{
                                        if (x >= -9)         {cout << "это однозначное ";}
                                        else{
                                            if (x >= -99)         {cout << "это двухзначное ";}
                                            else{
                                                if (x >= -999)         {cout << "это трехзначное ";}
                                                
                                                else                        {cout << "это крайне длинное ";}
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        } 
    }

    if (x == 0){cout << "число равное нулю  ;) ";}
    if (x > 0){cout << "положительное число";}
    if (x < 0){cout << "отрицательное число";}
    
    cin >> x;
    return 0;
}
