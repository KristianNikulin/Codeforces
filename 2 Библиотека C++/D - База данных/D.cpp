#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <string>
#include <queue>
#include <deque>
#include <stack>
#include <set>
#include <unordered_map>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    unordered_map<string, string> m;
    string s, q, w;

    vector<string> login;

    vector<string>::iterator it;

    while (cin >> s)
    {
        if (s == "register")
        {
            cin >> q >> w; // q - login w - password
            if (!m.count(q))
            {
                m[q] = w;
                cout << "account created" << '\n';
            }
            else
            {
                cout << "login already in use" << '\n';
            }
        }

        if (s == "login")
        {
            cin >> q >> w;

            if (m.count(q) && m[q] == w)
            {
                if (!count(login.begin(), login.end(), q))
                {
                    login.push_back(q);
                    cout << "logged in" << '\n';
                }
                else
                {
                    cout << "already logged in" << '\n';
                }
            }
            else
            {
                cout << "wrong account info" << '\n';
            }
        }

        if (s == "logout")
        {
            cin >> q;

            if (m.count(q) && count(login.begin(), login.end(), q))
            {
                it = find(login.begin(), login.end(), q);
                login.erase(it);
                cout << "logged out" << '\n';
            }
            else
            {
                cout << "incorrect operation" << '\n';
            }
        }
    }
}
