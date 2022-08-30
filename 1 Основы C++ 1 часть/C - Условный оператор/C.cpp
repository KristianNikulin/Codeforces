#include <iostream>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    int x, y;
    cin >> x >> y;

    if ((x > 0) && (y > 0))
    {
        cout << "1" << endl;
    }
    if ((x < 0) && (y > 0))
    {
        cout << "2" << endl;
    }
    if ((x < 0) && (y < 0))
    {
        cout << "3" << endl;
    }
    if ((x > 0) && (y < 0))
    {
        cout << "4" << endl;
    }
    return 0;
}