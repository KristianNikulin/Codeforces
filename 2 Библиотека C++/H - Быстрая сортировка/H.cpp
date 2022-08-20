#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <string>
#include <complex>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>

#define ll long long

using namespace std;

const ll MOD = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, a, m, k, mod;
    cin >> n >> a >> m >> k >> mod;

    vector<ll> col(100333, 0);

    for (int i = 0; i < n; ++i)
    {
        col[a]++;
        a = (a * m + k) % mod;
    }

    ll sum = 0, j = 0;

    for (ll i = 0; i < 100333; i++)
    {
        if (col[i] != 0)
        {
            for (ll k = 0; k < col[i]; k++)
            {
                sum += (j + 1) * i % MOD;
                sum %= MOD;
                j++;
            }
        }
        if (j >= n)
        {
            break;
        }
    }
    cout << sum;
}
