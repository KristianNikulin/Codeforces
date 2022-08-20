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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, m, k, x, y, g;
    cin >> n >> m >> k;

    g = pow(10, 9);
    g += 7;

    n++;
    m++;

    vector<vector<long long>> op(n, vector<long long>(m, 0));
    vector<vector<long long>> dp(n, vector<long long>(m, 0));

    for (int i = 0; i < k; i++)
    {
        cin >> x >> y;
        op[x][y]++;
    }

    int f = 0, h = 0, v = 0, b = 0;

    for (int j = 0; j < m; j++)
    {
        dp[f][j] = 1;
        if (op[f][j] || v > 0)
        {
            dp[f][j] = 0;
            v++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        dp[i][h] = 1;
        if (op[i][h] || b > 0)
        {
            dp[i][h] = 0;
            b++;
        }
    }

    for (int i = 1; i < n; i++)
    {
        for (int j = 1; j < m; j++)
        {
            if (op[i][j])
            {
                continue;
            }

            dp[i][j] += (dp[i - 1][j] % g) + (dp[i][j - 1] % g);
            dp[i][j] %= g;
        }
    }

    cout << (dp[n - 1][m - 1] % g);
}
