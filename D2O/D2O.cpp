#include <iostream>
using namespace std;
int main()
{
    //1st*****************************************************************************************************
    double a;
    int a1[100] = { 0 }, b, c, i = 0, j = 0;//Define an array(a1[]) to store remainders. 
    cin >> a;
    b = (int(a) >= 0) ? a : (-a);//Calculate a's integral part 1stly.(Make b always belong to N*)
    c = 1;
    while (b != 0)
    {
        c = b % 8;
        b = b / 8;
        a1[i] = c;
        i++;
    }
    if (a >= 0)
    {
        for (j = (i - 1); j >= 0; j--)
        {
            cout << a1[j];
        }
    }
    else
    {
        cout << "-";
        for (j = (i - 1); j >= 0; j--)
        {
            cout << a1[j];
        }
    }//Output the integral part of (a)₈
    //2nd******************************************************************************************************
    int a2[64] = { 0 }, t, p = 0, q = 0;
    double s;
    s = ((a - int(a)) >= 0) ? (a - int(a)) : -(a - int(a)); //Calculate a's fractional part 2ndly.
    t = 1;
    if (s != 0)
    {
        while ((s != 0) && (p <= 64))
        {
            t = int(s * 8);
            s = (s * 8) - t;
            a2[p] = t;
            p++;
        }
        cout << ".";
        for (q = (p - 1); q >= 0; q--)
        {
            cout << a2[q];
        }
    }//Output the fractional part of(a)₈
    return 0;
}