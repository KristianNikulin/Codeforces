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

    long long n, t;

    cin >> t;

    for (long long i = 0; i < t; i++)
    {
        cin >> n;
        vector<long long> a(n);

        for (long long i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        set<long long> st;
        long long l = 0, r = 0, ans = 1;

        while (r < n)
        {
            if (st.count(a[r]))
            {
                st.erase(a[l]);
                l++;
            }
            else
            {
                st.insert(a[r]);
                r++;
            }
            ans = max(ans, (long long)st.size());
        }
        cout << ans << '\n';
    }
}