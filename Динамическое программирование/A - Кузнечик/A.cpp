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

    long long n, k, g;
    cin >> n >> k;

    g = pow(10, 9);
    g += 7;

    vector<long long> dp(n + 1);
    dp[0] = 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= k; j++)
        {
            if (i - j < 0)
            {
                break;
            }
            dp[i] += (dp[i - j] % g);
        }
    }

    cout << dp.back() % g;
}
