#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, q, l, r, z, x;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> q;
        a[i] = q;
    }

    l = 1;
    r = 1;
    while (l && r)
    {
        cin >> l >> r;
        z = l;
        z--;
        x = r;
        x--;
        while (z != x)
        {
            q = a[z];
            a[z] = a[x];
            a[x] = q;
            z++;
            if (z == x)
            {
                break;
            }
            x--;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << ' ';
    }
}
