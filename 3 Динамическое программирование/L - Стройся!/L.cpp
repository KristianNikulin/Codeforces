#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <string>
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

    ll n, ans;
    cin >> n;

    if (n == 1 || n == 2)
    {
        cout << "1";
        return 0;
    }
    if (n == 3)
    {
        cout << "2";
        return 0;
    }

    vector<long long> dp(n + 1);
    dp[1] = 1;
    dp[2] = 1;
    dp[3] = 2;

    for (ll i = 4; i <= n; i++)
    {
        dp[i] = dp[i - 1] + dp[i - 3] + 1;

        if (i == n)
        {
            ans = dp[i];
        }
    }
    cout << ans;
}
