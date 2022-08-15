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

const long long INF = 1e18;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;

    using pii = pair<int, int>;

    const int OPEN = 1;
    const int CLOSE = 2;

    vector<pii> events;
    for (int i = 0; i < n; i++)
    {
        int l, r;
        cin >> l >> r;
        events.push_back({l, OPEN});
        events.push_back({r + 1, CLOSE});
    }
    sort(events.begin(), events.end());

    long long cnt = 0, ans = 0;

    long long lp = -INF;

    for (pii elem : events)
    {
        int xi = elem.first;
        int event = elem.second;

        if (event == OPEN)
        {
            cnt++;
        }
        else
        {
            cnt--;
        }

        if (cnt == 0)
        {
            ans += xi - lp;
            lp = -INF;
        }
        if (cnt > 0 && lp == -INF)
        {
            lp = xi;
        }
    }

    cout << ans;
}