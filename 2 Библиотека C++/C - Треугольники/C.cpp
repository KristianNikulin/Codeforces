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

    int n, i, j, k;
    cin >> n;
    vector<int> a(n);
    vector<int> ans(3);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    int count = 0;
    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            for (k = j + 1; k < n; k++)
            {
                ans[0] = a[i];
                ans[1] = a[j];
                ans[2] = a[k];
                sort(ans.begin(), ans.end());
                if (ans[0] + ans[1] > ans[2])
                {
                    count++;
                }
            }
    cout << count;
}
