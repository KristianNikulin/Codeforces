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

    long long l, r, g, sum = 0;
    cin >> l >> r;

    g = pow(10, 9);
    g += 7;

    vector<long long> dp(r + 1);
    dp[1] = 1;

    for (int i = 1; i <= r; i++)
    {
        for (int j = 2; j * i <= r; j++)
        {
            dp[i * j] += dp[i] % g;
        }

        if (i >= l && i <= r)
        {
            sum += dp[i];
            sum %= g;
        }
    }

    cout << sum % g;
}
