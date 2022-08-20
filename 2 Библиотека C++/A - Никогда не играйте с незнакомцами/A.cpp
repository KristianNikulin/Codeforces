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

    int n, q;
    bool correct = true;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());

    for (int i = 0; i < n - 1; i++)
    {
        if (((a[i] + 1) != a[i + 1]) || (a[i] == a[i + 1]))
        {
            correct = false;
            break;
        }
    }
    if (correct)
    {
        cout << "Deck looks good";
    }
    else
    {
        cout << "Scammed";
    }
}
