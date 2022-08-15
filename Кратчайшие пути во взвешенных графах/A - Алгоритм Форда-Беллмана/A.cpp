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

using graph = vector<vector<ll>>;

const long long INF = 1e18;

struct wedge
{
    ll u, v;
    ll w;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, m, start;
    cin >> n >> m >> start;

    start--;

    vector<wedge> g;

    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        ll w;
        cin >> u >> v >> w;
        u--;
        v--;
        g.push_back({u, v, w});
        g.push_back({v, u, w});
    }

    vector<ll> d(n, INF);
    d[start] = 0;
    bool flag = false;

    for (ll i = 0; i < n; i++)
    {
        flag = false;
        for (wedge elem : g)
        {
            ll u = elem.u;
            ll v = elem.v;
            ll w = elem.w;
            if (d[u] + w < d[v])
            {
                flag = true;
                d[v] = d[u] + w;
            }
        }
        if (!flag)
        {
            break;
        }
    }
    if (flag)
    {
        cout << "Negative cycle";
    }
    else
    {
        for (ll elem : d)
        {
            if (elem == INF)
            {
                cout << "-1" << ' ';
                continue;
            }
            cout << elem << ' ';
        }
    }
}
