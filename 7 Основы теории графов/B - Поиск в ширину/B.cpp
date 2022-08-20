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

void bfs(ll start, const graph &g, vector<ll> &d, vector<ll> &p)
{
    d[start] = 0;
    queue<ll> q;
    q.push(start);

    while (!q.empty())
    {
        ll u = q.front();
        q.pop();

        for (ll v : g[u])
        {
            if (d[v] == INF)
            {
                d[v] = d[u] + 1;
                p[v] = u;
                q.push(v);
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, m, start;
    cin >> n >> m >> start;

    start--;

    graph g(n);

    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        cin >> u >> v;
        u--;
        v--;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<ll> d(n, INF);
    vector<ll> p(n, -1);

    bfs(start, g, d, p);

    for (ll i = 0; i < n; i++)
    {
        if (d[i] == INF)
        {
            cout << "-1" << ' ';
            continue;
        }

        cout << d[i] << ' ';
    }
}
