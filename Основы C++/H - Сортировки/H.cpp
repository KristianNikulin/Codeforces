#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, n, q, col;
    bool sorted;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n;
        int a[n];
        col = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> q;
            a[j] = q;
        }
        sorted = true;
        while (sorted)
        {
            sorted = false;
            for (int k = 0; k < n - 1; k++)
            {
                if (a[k] > a[k + 1])
                {
                    int g = a[k];
                    a[k] = a[k + 1];
                    a[k + 1] = g;
                    col++;
                    sorted = true;
                }
            }
        }
        cout << col << '\n';
    }
}
