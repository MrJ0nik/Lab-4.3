#include <iostream>
#include <iomanip> 
#include <cmath>
using namespace std;

int main()
{
    double x, A, F,a, b, c,y, Xpoc, Xkinc, Xkrok;
    //cout << "x = "; cin >> x;
    cout << "Xpoc = "; cin >> Xpoc;
    cout << "Xkinc = "; cin >> Xkinc;
    cout << "Xkrok = "; cin >> Xkrok;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;

    cout << fixed;
    cout << "---------------------------" << endl;
    cout << "|" << setw(5) << "x" << " |"
        << setw(7) << "F" << " |" << endl;
    cout << "---------------------------" << endl;

    x = Xpoc;
    while (x <= Xkinc)
    {

        if ((x + c) < 0 && a != 0)
        {
            F = -a * x * x - b;
        }
        else
        {
            if ((x + c) > 0 && a == 0)
                F = (x - a) / (x - c);
            else {
                F = (x / c) + (c / x);
            }
        }
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << F
            << " |" << endl;

        x += Xkrok;
    }

    cout << "---------------------------" << endl;
    return 0;
}
