#include <bits/stdc++.h>
using namespace std;
double SquareRoot(float n)
{
    double x;
    x = pow(n, 0.5);
    return x;
}
int main()
{
    float n;
    double z;
    cin >> n;
    if (n >= 0)
    {
        z = SquareRoot(n);
        cout << z << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
}