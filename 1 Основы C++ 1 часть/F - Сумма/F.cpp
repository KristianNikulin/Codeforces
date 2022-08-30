#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long a, b, sum = 0;
    cin >> a >> b;

    if (a > b)
    {
        long long c = b;
        b = a;
        a = c;
    }

    for (long long i = a; i <= b; i++)
    {
        sum += i;
    }
    cout << sum;
}
