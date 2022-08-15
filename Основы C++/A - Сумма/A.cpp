#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, sum, q;
    sum = 0;
    cin >> n;

    for (long long i = 0; i < n; i++)
    {
        cin >> q;
        sum += q;
    }

    cout << sum;
}
