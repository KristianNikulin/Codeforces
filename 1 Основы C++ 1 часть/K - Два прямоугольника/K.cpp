#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int sum = 0, pl1 = 0, pl2 = 0, pl_per = 0;

    int i, j;

    int x1, y1, x2, y2;
    int x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> x3 >> y3 >> x4 >> y4;

    if (x1 > x2)
    {
        swap(x1, x2);
    }
    if (y1 > y2)
    {
        swap(y1, y2);
    }

    if (x3 > x4)
    {
        swap(x3, x4);
    }
    if (y3 > y4)
    {
        swap(y3, y4);
    }

    i = abs(x2 - x1);
    j = abs(y2 - y1);
    pl1 = i * j;

    i = abs(x3 - x4);
    j = abs(y3 - y4);
    pl2 = i * j;

    sum += pl1;
    sum += pl2;

    i = 0;
    j = 0;

    // i

    if (x3 < x2 && x1 < x3 && x2 < x4)
    {
        i = abs(x3 - x2);
    }

    if (x3 < x1 && x1 < x4 && x4 < x2)
    {
        i = abs(x4 - x1);
    }

    if (x3 >= x1 && x4 <= x2)
    {
        i = abs(x3 - x4);
    }

    if (x1 >= x3 && x2 <= x4)
    {
        i = abs(x2 - x1);
    }

    // j

    if (y3 < y2 && y1 < y3 && y2 < y4)
    {
        j = abs(y3 - y2);
    }

    if (y3 < y1 && y1 < y4 && y4 < y2)
    {
        j = abs(y4 - y1);
    }

    if (y3 >= y1 && y4 <= y2)
    {
        j = abs(y3 - y4);
    }

    if (y1 >= y3 && y2 <= y4)
    {
        j = abs(y2 - y1);
    }

    pl_per = i * j;

    cout << pl_per;
}
