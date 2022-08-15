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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, summ = 0;
    cin >> n;

    vector<long long> a(n);

    vector<ll> dp(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    dp[0] = a[0];
    summ += dp[0];

    for (ll i = 0; i < n - 1; i++)
    {
        dp[i + 1] = (i + 1) * a[i + 1] + dp[i] + a[i + 1];
        summ += dp[i + 1];
    }
    cout << summ;
}

// O(n^2)
/*
    for (ll i = 0; i < n; i++)
    {
        ll summ = 0;

        for (ll j = i; j < n; j++)
        {
            SUMM += summ;
            SUMM += a[j];

            summ += a[j];
        }
    }
*/