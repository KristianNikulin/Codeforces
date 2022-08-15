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
#include <complex>

#define ll long long

using namespace std;

using base = complex<double>;

using vc = vector<base>;

const double PI = acos(-1);

void fft(vc &a, bool inverse)
{
    ll n = a.size();

    if (n == 1)
    {
        return;
    }

    vc a0(n / 2);
    vc a1(n / 2);
    ll j = 0;
    for (ll i = 0; i < n; i += 2)
    {
        a0[j] = a[i];
        a1[j] = a[i + 1];
        j++;
    }

    fft(a0, inverse);
    fft(a1, inverse);

    double phi = (2 * PI) / n;

    if (inverse)
    {
        phi *= -1;
    }

    base w = 1, wn = base(cos(phi), sin(phi));

    for (ll i = 0; i < n / 2; i++)
    {
        a[i] = a0[i] + w * a1[i];
        a[i + n / 2] = a0[i] - w * a1[i];
        w *= wn;
    }

    if (inverse)
    {
        for (ll i = 0; i < n; i++)
        {
            a[i] /= 2;
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    cout.precision(10);
    cout << fixed;

    long long n;
    cin >> n;

    vector<long long> a(n);

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    ll lg_n = 0;
    while ((1 << lg_n) < n)
    {
        lg_n++;
    }

    ll m = (1 << lg_n);
    vc b(m);

    for (ll i = 0; i < n; i++)
    {
        b[i] = base(a[i]);
    }

    fft(b, false);

    for (base elem : b)
    {
        cout << elem.real() << ' ' << elem.imag() << '\n';
    }
}
