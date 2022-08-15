#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, n;
    cin >> t;
    vector<int> a = {5000, 1000, 500, 200, 100};
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        vector<int> ans;

        for (int i = 0; i < 5; i++)
        {
            ans.push_back(n / a[i]);
            n %= a[i];
        }

        for (int i = 4; i >= 0; i--)
        {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
}
