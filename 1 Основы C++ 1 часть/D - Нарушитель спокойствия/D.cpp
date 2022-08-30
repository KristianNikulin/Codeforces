#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int d, x, y;
    cin >> d >> x >> y;

    if (x * x + y * y <= d * d)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}
