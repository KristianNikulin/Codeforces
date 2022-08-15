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

#define ll long long

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    const long long ACC = 1e15;

    ll osn = 0, dr = 0, size = 0, number;

    string::size_type sz = 0;

    string s, s_osn, s_dr;

    while (cin >> s)
    {
        s_osn = s.substr(0, s.find(".")); // до точки
        s_dr = s.substr(s.find(".") + 1); // после точки

        osn += stoll(s_osn, &sz, 10);

        if (s_dr.length() < 15)
        {
            while (s_dr.length() != 15)
            {
                s_dr += '0';
            }
        }
        if (s_dr.length() > 15)
        {
            while (s_dr.length() != 15)
            {
                s_dr.pop_back();
            }
        }

        dr += stoll(s_dr, &sz, 10);
    }

    if (dr >= ACC) //!!!
    {
        osn += dr / ACC;

        ll n = dr / ACC;
        n *= ACC;
        dr -= n;
    }

    cout << osn << ".";

    number = dr;
    while (number != 0)
    {
        number /= 10;
        size++;
    }

    ll size_dr = 15 - size;

    while (size_dr != 0)
    {
        cout << "0";
        size_dr--;
    }
    if (dr != 0)
    {
        cout << dr;
    }
}
