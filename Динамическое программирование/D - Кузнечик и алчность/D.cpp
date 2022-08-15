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

using namespace std;

const long long INF = 1e18;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, k, m;
    cin >> n >> k;
    vector<long long> c(n + 1);
    for (int i = 1; i < n; i++)
    {
        cin >> c[i];
    }

    vector<long long> dp(n + 1, INF);
    dp[0] = 0;
    vector<long long> p(n + 1);

    for (int i = 1; i <= n; i++)
    {
        m = -1;
        for (int j = 1; j <= k; j++)
        {
            if (i - j < 0)
            {
                break;
            }
            if (dp[i - j] < dp[i])
            {
                dp[i] = dp[i - j];
                m = i - j;
            }
        }
        dp[i] += c[i];
        p[i] = m;
    }

    cout << dp.back() << '\n';

    vector<long long> path;
    int u = n;
    while (p[u] != u)
    {
        path.push_back(u);
        u = p[u];
    }
    path.push_back(u);
    reverse(path.begin(), path.end());
    cout << path.size() << '\n';
    for (long long elem : path)
    {
        cout << elem << ' ';
    }
}
