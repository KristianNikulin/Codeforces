#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(9);
    cout << fixed;

    long long a, b, c;
    double d, x1, x2;
    cin >> a >> b >> c;

    if (a == 0)
    {
        if (b != 0)
        {
            cout << -c / b;
        }
        if (b == 0 && c == 0)
        {
            cout << "none";
        }
    }
    else
    {
        d = b * b - 4 * a * c;

        if (d == 0)
        {
            x1 = -b / (2 * a);
            cout << x1;
        }
        if (d > 0)
        {
            x1 = (-b - sqrt(d)) / (2 * a);
            x2 = (-b + sqrt(d)) / (2 * a);

            if (x1 < x2)
            {
                cout << x1 << ' ' << x2;
            }
            else
            {
                cout << x2 << ' ' << x1;
            }
        }
    }
    return 0;
}