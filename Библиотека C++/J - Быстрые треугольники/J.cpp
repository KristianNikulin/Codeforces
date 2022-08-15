#include <iostream>
#include <vector>
#include <algorithm>
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

    ll n, col = 0, dist;

    vector<ll>::iterator it;

    cin >> n;
    vector<ll> a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for (ll i = 0; i < n; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            it = upper_bound(a.begin() + j + 1, a.end(), a[i] + a[j] - 1);

            dist = distance(a.begin() + j, it) - 1;

            col += dist;
        }
    }
    cout << col;
}

/*
long long bin_search(vector<long long> &a, double val)
{
    int l = 0, r = a.size() - 1;
    if (val > a[a.size() - 1])
        return a.size() - 1;
    if (val < a[l])
        return 0;
    while (l + 1 < r)
    {
        int i = (r + l) / 2;
        if (a[i] <= val)
            l = i;
        else
            r = i;
    }
    return l;
}
*/
// int h = bin_search(a, a[i] + a[j] - 0.5);
// if (h > j) res += h - j;