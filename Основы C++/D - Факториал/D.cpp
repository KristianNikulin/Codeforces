#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, f = 1;
    cin >> n;
    long long g = pow(10, 9);
    g += 7;

    for (int i = 2; i <= n; i++)
    {
        f *= i;
        f %= g;
    }

    cout << f;
}
