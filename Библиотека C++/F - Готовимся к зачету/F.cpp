#include <iostream>
#include <vector>
#include <algorithm>
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

    long long n, a0, ai, ai1, ans1 = 0, ans2 = 0;
    cin >> n >> a0;
    ai1 = a0;
    for (long long i = 1; i <= n; i++)
    {
        long long q = (ai1 * 5);
        long long w = (pow(10, 9) + 7);
        ai = q % w;

        if (ai > ans2)
        {
            ans1 = ans2;
            ans2 = ai;
        }
        if (ai > ans1 && ai < ans2)
        {
            ans1 = ai;
        }

        ai1 = ai;
    }
    cout << ans1 << ' ' << ans2;
}
