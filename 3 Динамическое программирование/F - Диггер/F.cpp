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

    long long n, m;
    cin >> n >> m;

    vector<vector<long long>> dp(n, vector<long long>(m, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> dp[i][j];
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 && j == 0)
            {
                continue;
            }

            if (i == 0 && j != 0)
            {
                dp[i][j] = dp[i][j - 1] + dp[i][j];
                continue;
            }

            if (i != 0 && j == 0)
            {
                dp[i][j] = dp[i - 1][j] + dp[i][j];
                continue;
            }

            dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]) + dp[i][j];
        }
    }

    cout << dp[n - 1][m - 1];
}
