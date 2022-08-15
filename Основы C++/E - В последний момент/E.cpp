#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    string s;
    cin >> s;
    int sum = 0;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            sum++;
        }
        if (s[i] == '4')
        {
            sum++;
        }
        if (s[i] == '6')
        {
            sum++;
        }
        if (s[i] == '8')
        {
            sum += 2;
        }
        if (s[i] == '9')
        {
            sum++;
        }
    }
    cout << sum;
}
