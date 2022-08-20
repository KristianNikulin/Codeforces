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

#define ll long long

using namespace std;
using pii = pair<long long, long long>;

const long long INF = 1e18;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string a, b, c;
    cin >> a;
    cin >> b;

    if (a.size() > b.size())
    {
        c = a;
        a = b;
        b = c;
    }

    vector<vector<ll>> dp(a.size() + 1, vector<ll>(b.size() + 1, 0));

    for (int j = 1; j <= b.size(); j++)
    {
        for (int i = 1; i <= a.size(); i++)
        {
            if (a[i - 1] == b[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    cout << dp[a.size()][b.size()];
}
