#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    double z;
    cin >> n;
    if (n >= 0)
    {
        z = pow(n, 0.5);
        cout << z << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}