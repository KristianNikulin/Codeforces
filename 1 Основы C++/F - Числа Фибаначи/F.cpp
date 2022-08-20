#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    long long a, b;
    a = 0;
    b = 1;
    long long n;
    int col = 1;
    cin >> n;

    if (n < 2)
    {
        if (n == 0)
        {
            cout << 0;
        }
        if (n == 1)
        {
            cout << 1;
        }
    }
    else
    {
        while (b < n)
        {
            long long c = a + b;
            a = b;
            b = c;
            col++;
        }

        if (b == n)
        {
            cout << col;
        }
        else
        {
            cout << -1;
        }
    }
}
