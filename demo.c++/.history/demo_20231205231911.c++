#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, k, q;
    int b, c;
    int l, r;
    cin >> a >> k >> q;
    for (int i = 1; i <= q; i++)
    {

        cin >> l >> r;
        b = 0;
        c = 0;
        for (int j = l - 1; j < r; j++)
        {
            if ((a + j * k) % 2 == 0)
            {
                b++;
            }
            else
            {
                c++;
            }
        }
        if (b > c)
        {
            cout << -1 << endl;
        }
        if (b < c)
        {
            cout << 1 << endl;
        }
        else
            cout << 0 << endl;
    }

    return 0;
}
