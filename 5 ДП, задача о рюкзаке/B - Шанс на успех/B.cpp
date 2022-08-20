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

using pii = pair<long long, long long>;
using vec2d = vector<vector<long long>>;

const long long INF = 1e18;

long long solve(vec2d &dp, int l, int r, const vector<long long> &a, const vector<long long> &b)
{
    if (dp[l][r] != -1)
    {
        return dp[l][r];
    }
    long long res = INF;
    for (long long k = l; k < r; k++)
    {
        long long dp_left = solve(dp, l, k, a, b);
        long long dp_right = solve(dp, k + 1, r, a, b);
        res = min(res, a[l] * b[k] * b[r] + dp_left + dp_right);
    }
    dp[l][r] = res;
    return res;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n;
    cin >> n;
    vector<long long> a(n);
    vector<long long> b(n);

    for (long long i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
    }

    vec2d dp(n, vector<long long>(n, -1));

    for (long long i = 0; i < n; i++)
    {
        dp[i][i] = 0;
    }

    long long ans = solve(dp, 0, n - 1, a, b);
    cout << ans;
}