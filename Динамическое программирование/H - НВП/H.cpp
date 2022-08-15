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

    ll t, n;
    cin >> t;

    for (ll k = 0; k < t; k++)
    {
        ll ans = 0, ii = 0, z = -1;

        cin >> n;
        vector<ll> a(n);
        vector<ll> dp(n, 1);

        vector<ll> p;

        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        for (ll i = 0; i < n; i++)
        {
            ll maxx = 0;

            for (ll j = 0; j < i; j++)
            {
                if (a[i] > a[j])
                {
                    maxx = max(maxx, dp[j]);
                }
            }
            dp[i] = 1 + maxx;

            ans = max(ans, dp[i]);
        }

        for (ll i = n - 1; i >= 0; i--)
        {

            if (dp[i] == ans && z == -1)
            {
                p.push_back(i + 1);
                ii++;
                z = dp[i];
                z--;
            }
            if (dp[i] == z)
            {
                p.push_back(i + 1);
                ii++;
                z--;
            }
            if (z == 0) // нужных чисел больше нет
            {
                break;
            }
        }
        cout << ans;
        cout << '\n';

        reverse(p.begin(), p.end());
        for (ll i = 0; i < ii; i++)
        {
            cout << p[i] << ' ';
        }
        cout << '\n';
    }
}
