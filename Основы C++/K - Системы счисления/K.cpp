#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>

using namespace std;

string ss_is_10_v_any(long long b, long long n)
{

    string res = "";

    if (n == 0)
    {
        res = "0";
        return res;
    }

    for (int i = 0; n > 0; i++)
    {

        if (n == b)
        {
            res = "10" + res;
            break;
        }

        else
        {
            if (n % b > 9)
            {
                res = char('a' + (n % b) - 10) + res;
            }
            else
            {
                res = char((n % b) + '0') + res;
            }
        }

        n /= b;
    }

    return res;
}

long long ss_is_any_v_10(long long ns, char *n)
{
    int ilen, a10;
    long long chr10 = 0, ac = 1;
    char achr;
    ilen = strlen(n) - 1;

    while (ilen != -1)
    {
        achr = n[ilen];
        a10 = achr;
        if (a10 >= 'a')
            a10 = a10 - 'a' + 10; // a = 97
        else
            a10 = a10 - 48; // в аски начинаются цифры

        chr10 = chr10 + a10 * ac;
        ac = ac * ns;
        ilen = ilen - 1;
    }

    long long result = chr10;
    return result;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

    long long a, b, q;
    char n[80];
    cin >> a >> b;
    cin >> n;

    q = ss_is_any_v_10(a, n);

    cout << ss_is_10_v_any(b, q);
}
