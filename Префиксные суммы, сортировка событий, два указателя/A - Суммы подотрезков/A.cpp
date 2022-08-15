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

    long long n, q, sum = 0;
    cin >> n;
    vector<long long> a(n);
    vector<long long> s(n, 0);

    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
        sum += a[i];
        s[i] = sum;
    }

    cin >> q;

    for (long long i = 0; i < q; i++)
    {
        long long l, r;
        cin >> l >> r;

        l--;
        r--;

        if (l == 0)
        {
            cout << s[r] << '\n';
            continue;
        }

        cout << s[r] - s[l - 1] << '\n';
    }
}