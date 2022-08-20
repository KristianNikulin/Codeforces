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

    long long n, ans = 0;
    cin >> n;

    vector<long long> a(n + 1);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (ll i = 0; i < n; i++)
    {
        ll MAX = -1e18;

        for (ll j = i; j < n; j++)
        {
            if (a[j] > MAX)
            {
                MAX = a[j];
            }

            ans += MAX;
        }
    }
    cout << ans;
}
