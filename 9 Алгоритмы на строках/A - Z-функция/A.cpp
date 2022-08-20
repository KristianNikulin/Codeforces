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

vector<ll> z_func(const string &s)
{
    ll n = s.size();
    vector<ll> z(n);
    z[0] = s.size();
    ll l = 0, r = 0;
    for (ll i = 1; i < n; i++)
    {
        if (i <= r)
        {
            z[i] = min(z[i - l], r - i + 1);
        }
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
        {
            z[i]++;
        }
        if (i + z[i] >= r)
        {
            l = i;
            r = i + z[i] - 1;
        }
    }
    return z;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    vector<ll> z = z_func(s);
    for (ll elem : z)
    {
        cout << elem << ' ';
    }
}
