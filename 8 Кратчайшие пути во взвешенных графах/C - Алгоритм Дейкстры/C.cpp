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

const long long INF = 1e18;

// вершины графа и длина ребра между ними
struct wedge
{
    ll u, v;
    ll w;
};

using graph = vector<vector<ll>>;
using wgraph = vector<vector<wedge>>; // взвешенный граф

using item = pair<ll, ll>;

// Алгоритм Дейкстры
vector<ll> daykstra(ll start, const wgraph &g)
{
    ll n = g.size();
    vector<ll> d(n, INF);
    vector<bool> visited(n);
    priority_queue<item> pq;
    d[start] = 0;
    pq.push({-d[start], start});
    while (!pq.empty())
    {
        item cur = pq.top();
        pq.pop();
        ll u = cur.second;
        if (visited[u])
        {
            continue;
        }
        visited[u] = true;
        for (wedge elem : g[u])
        {
            ll v = elem.v;
            ll w = elem.w;
            if (d[u] + w < d[v])
            {
                d[v] = d[u] + w;
                pq.push({-d[v], v});
            }
        }
    }
    return d;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, m, start;
    cin >> n >> m >> start;

    start--;

    wgraph g(n);

    for (ll i = 0; i < m; i++)
    {
        ll u, v;
        ll w;
        cin >> u >> v >> w;
        u--;
        v--;

        g[u].push_back({u, v, w});
        g[v].push_back({v, u, w});
    }

    vector<ll> d = daykstra(start, g);

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
