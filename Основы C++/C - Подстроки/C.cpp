#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int count_of_substrings(string a, string b)
{
    int start = 0;
    int count = 0;
    int pos = 0;

    for (;;)
    {
        pos = a.find(b.c_str(), start);
        if (pos != -1)
        {
            start = pos + 1;
            count++;
        }
        else
        {
            break;
        }
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, m, col;

    cin >> n >> m;
    string a;
    string b;
    cin >> a;
    cin >> b;

    col = count_of_substrings(a, b);
    cout << col;
}
