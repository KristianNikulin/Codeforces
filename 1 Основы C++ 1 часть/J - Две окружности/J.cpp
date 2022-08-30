#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long x1, y1, r1, x2, y2, r2;
    double dist;
    cin >> x1 >> y1 >> r1;
    cin >> x2 >> y2 >> r2;

    dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    if (dist == 0 && r1 == r2)
    {
        cout << "YES";
        return 0;
    }

    if (dist > r1 + r2 || dist < abs(r1 - r2))
    {
        cout << "NO";
    }
    else
    {
        cout << "YES";
    }
}
