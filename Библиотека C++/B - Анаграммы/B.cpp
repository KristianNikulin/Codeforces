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

    int n;
    cin >> n;
    set<string> s;
    string q;

    for (int i = 0; i < n; i++)
    {
        cin >> q;
        sort(q.begin(), q.end());
        s.insert(q);
    }

    int col = s.size();
    cout << col;
}
