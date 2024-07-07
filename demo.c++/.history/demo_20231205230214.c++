#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, k, q;
    int b, c;
    cin >> a >> k >> q;
    for (int i = 1; i <= q; i++)
    {
        int l, r;
        cin >> l >> r;
        for (int j = l - 1; j <= r; j++)
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
        }
    if (b > c)
    {
        cout << -1;
    }
    if (b < c)
    {
        cout << 1;
    }
    else
        cout << 0;
    return 0;
}
