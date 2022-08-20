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

    long long n, ans;
    cin >> n;

    vector<long long> dp(2 * 1e7);
    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 2;
    dp[3] = 3;

    if (n == 2)
    {
        cout << "2";
        return 0;
    }

    if (n == 3)
    {
        cout << "3";
        return 0;
    }

    for (int i = 4; i <= n; i++)
    {
        ll q = 1e18, w = 1e18, e = dp[i - 1] + i;

        if (i % 2 == 0)
        {
            q = dp[i / 2] + i;
        }

        if (i % 3 == 0)
        {
            w = dp[i / 3] + i;
        }

        dp[i] += min(q, min(w, e));

        if (i == n)
        {
            ans = dp[i];
        }
    }
    cout << ans;
}
