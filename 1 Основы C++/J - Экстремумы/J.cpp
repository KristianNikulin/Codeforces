#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q;

    int min = 0, max = 0, gl_min_pos = 0, gl_max_pos = 0;

    cin >> n;

    vector<int> ans_min;
    vector<int> ans_max;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> q;
        a[i] = q;
    }

    if (n > 1)
    {
        // min
        if (a[0] < a[1])
        {
            min++;
            ans_min.push_back(1);
        }
        for (int i = 1; i < n - 1; i++)
        {
            if ((a[i - 1] > a[i]) && (a[i] < a[i + 1]))
            {
                min++;
                ans_min.push_back(i + 1);
            }
        }
        if (a[n - 2] > a[n - 1])
        {
            min++;
            ans_min.push_back(n);
        }
        cout << min << ' ';
        for (int i = 0; i < ans_min.size(); i++)
        {
            cout << ans_min[i] << ' ';
        }
        cout << '\n';

        // max
        if (a[0] > a[1])
        {
            max++;
            ans_max.push_back(1);
        }
        for (int i = 1; i < n - 1; i++)
        {
            if ((a[i - 1] < a[i]) && (a[i] > a[i + 1]))
            {
                max++;
                ans_max.push_back(i + 1);
            }
        }
        if (a[n - 2] < a[n - 1])
        {
            max++;
            ans_max.push_back(n);
        }
        cout << max << ' ';
        for (int i = 0; i < ans_max.size(); i++)
        {
            cout << ans_max[i] << ' ';
        }
        cout << '\n';

        // gl
        for (int i = 1; i < n; i++)
        {
            if (a[i] < a[gl_min_pos])
            {
                gl_min_pos = i;
            }
            if (a[i] > a[gl_max_pos])
            {
                gl_max_pos = i;
            }
        }

        cout << gl_min_pos + 1 << ' ' << gl_max_pos + 1;
    }
    else
    {
        cout << 1 << ' ' << 1 << '\n';
        cout << 1 << ' ' << 1 << '\n';
        cout << 1 << ' ' << 1;
    }
}
