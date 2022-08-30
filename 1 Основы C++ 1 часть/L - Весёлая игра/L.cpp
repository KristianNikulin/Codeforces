#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t, c;
    cin >> t >> c;

    if (c <= t)
    {
        cout << "1";
    }
    else
    {
        cout << "2";
    }
}
