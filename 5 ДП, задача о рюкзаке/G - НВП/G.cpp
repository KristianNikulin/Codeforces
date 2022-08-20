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
using pii = pair<ll, ll>;

const ll INF = 1e18;

ll dp_bin(const vector<vector<ll>> &dp, const vector<ll> &a, ll lp, ll num)
{
    ll l = 0, r = lp;
    while (l + 1 < r)
    {
        ll m = (l + r) / 2;
        if (a[dp[m].back()] < num)
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }
    return r;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, t;
    cin >> t;
    for (ll i = 0; i < t; i++)
    {
        cin >> n;
        vector<ll> a(n);

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        vector<vector<ll>> dp(n + 1);
        vector<ll> prev(n, -1);

        int lp = 1;

        for (int i = 0; i < n; i++)
        {
            if (dp[lp].empty())
            {
                dp[lp].push_back(i);
                continue;
            }
            ll ind = dp_bin(dp, a, lp, a[i]);
            if (a[i] > a[dp[ind].back()])
            {
                lp++;
                ind = lp;
            }

            dp[ind].push_back(i);
            if (ind > 1)
            {
                prev[i] = dp[ind - 1].back();
            }
        }

        ll ans = lp;
        vector<ll> res;
        ll u = dp[lp].back();

        while (prev[u] != -1)
        {
            res.push_back(u);
            u = prev[u];
        }

        res.push_back(u);
        cout << ans << '\n';

        reverse(res.begin(), res.end());
        for (ll elem : res)
        {
            cout << elem + 1 << ' ';
        }
        cout << '\n';
    }
}