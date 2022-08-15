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

const ll MAX_N = 500000;
const ll P = 31;
const ll MOD = 1e9 + 7;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    vector<ll> pows(MAX_N);
    pows[0] = 1;

    for (ll i = 1; i < MAX_N; i++)
    {
        pows[i] = (pows[i - 1] * P) % MOD;
    }

    ll count = 0;

    string pattern, text;
    cin >> pattern >> text;

    ll n = text.size();
    ll m = pattern.size();
    ll psi = 0;

    for (ll i = 0; i < m; i++)
    {
        psi = (psi + (pattern[i] - 'a' + 1) * pows[m - 1 - i]) % MOD;
    }

    vector<ll> h(n + 1);

    for (ll i = 0; i < n; i++)
    {
        h[i + 1] = ((h[i] * P) % MOD + (text[i] - 'a' + 1)) % MOD;
    }

    for (ll i = 0; i <= n - m; i++)
    {
        ll l = i + 1;
        ll r = i + m;
        ll h2 = (h[r] - (pows[m] * h[l - 1]) % MOD + MOD) % MOD;

        if (psi == h2)
        {
            count++;
        }
    }
    cout << count;
}
