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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll q, w, e;

    stack<ll> st;

    char s;

    do
    {
        s = getchar();

        if (s == '0' || s == '1' || s == '2' || s == '3' || s == '4' || s == '5' || s == '6' || s == '7' || s == '8' || s == '9')
        {
            e = s - '0';
            st.push(e);
        }
        if (s == '-')
        {
            q = st.top();
            st.pop();
            w = st.top();
            st.pop();
            st.push(w - q);
        }
        if (s == '+')
        {
            q = st.top();
            st.pop();
            w = st.top();
            st.pop();
            st.push(w + q);
        }
        if (s == '*')
        {
            q = st.top();
            st.pop();
            w = st.top();
            st.pop();
            st.push(w * q);
        }
    } while (s != '\n');

    cout << st.top();
}