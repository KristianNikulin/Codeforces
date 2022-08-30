#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int h_s, m_s, h_l, m_l, h_b, m_b, n;

    cin >> h_s >> m_s;
    cin >> h_l >> m_l;
    cin >> h_b >> m_b;
    cin >> n;

    h_s += (h_l * n);
    m_s += (m_l * n);

    h_s += (h_b * (n - 1));
    m_s += (m_b * (n - 1));

    while (m_s >= 60)
    {
        h_s++;
        m_s -= 60;
    }
    while (h_s >= 24)
    {
        h_s -= 24;
    }

    cout << h_s << ' ' << m_s;
}
