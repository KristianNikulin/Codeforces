#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long n, m, x, y, ans;
    cin >> n >> m >> x >> y;

    long long pl_pol = n * m;
    long long pl_plitka = x * y;

    if (x >= n && y >= m)
    {
        cout << "1";
    }
    else
    {
        ans = floor(n / x) * floor(m / y);

        if (ans * pl_plitka != pl_pol)

            if (x * ans == n && y * ans > m)
            {
                ans += n / x;
            }
            else
            {
                if (x * ans > n && y * ans == m)
                {
                    ans += m / y;
                }
                else // x * ans > n && y * ans > m
                {
                    ans += n / x;
                    ans += m / y;
                    ans++;
                }
            }
        cout << ans;
    }
}
