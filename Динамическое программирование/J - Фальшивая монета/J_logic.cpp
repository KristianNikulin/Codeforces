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

#define ll long long

using namespace std;

double log3(ll a)
{
    return log(a) / log(3);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll t, n;
    cin >> t;

    for (ll i = 0; i < t; i++)
    {
        cin >> n;

        cout << ceil(log3(n)) << '\n';
    }
}
