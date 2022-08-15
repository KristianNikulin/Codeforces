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

    long long n, q, sum = 0;
    cin >> n;
    multiset<long long> ms;

    multiset<long long>::iterator it;

    for (int i = 0; i < n; i++)
    {
        cin >> q;
        ms.insert(q);
    }

    while (n > 1)
    {
        it = ms.begin();

        cout << *it << ' ';
        sum += *it;
        advance(it, 1);
        cout << *it << '\n';
        sum += *it;

        ms.insert(sum);
        sum = 0;

        ms.erase(ms.begin());
        ms.erase(ms.begin());

        n--;
    }
}
