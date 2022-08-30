#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.precision(10);

    double a, b, c, ans;
    cin >> a >> b >> c;

    ans = (a + b) * c;

    cout << ans;
    return 0;
}