#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <cmath>
#include <string>
#include <complex>
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

    int n;
    cin >> n;

    multiset<int> ms1; // слева от медианы
    multiset<int> ms2; // справа от медианы
    int mediana, chislo, m;

    int col_ms1 = 0, col_ms2 = 0, chet = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> chislo;
        chet++;

        if (i == 0) // самое первое число
        {
            mediana = chislo;
            cout << mediana << '\n';
            continue;
        }

        if (chislo < mediana)
        {
            ms1.insert(chislo);
            col_ms1++;

            if (col_ms1 == col_ms2)
            {
                cout << mediana << '\n';
                continue;
            }
            else
            {
                m = *(ms1.rbegin());
                ms2.insert(mediana);
                mediana = m;
                ms1.erase(ms1.find(m));
                col_ms1--;
                col_ms2++;
            }
        }
        else // chislo >= mediana
        {
            ms2.insert(chislo);
            col_ms2++;

            if (col_ms1 == col_ms2)
            {
                cout << mediana << '\n';
                continue;
            }
            else
            {
                if (chet % 2 == 0 && abs(col_ms1 - col_ms2) == 1)
                {
                    cout << mediana << '\n';
                    continue;
                }

                m = *(ms2.begin());
                ms1.insert(mediana);
                mediana = m;
                ms2.erase(ms2.begin());
                col_ms2--;
                col_ms1++;
            }
        }
        cout << mediana << '\n';
    }
}
