#include <iostream>
using namespace std;

int main()
{

    // 请在此添加你的代码
    /********** Begin ********/
    int x[12], a, b, c, d, num;
    for (int i = 0; i < 12; i++)
    {
        cin >> x[i];
        if ((i + 1) % 2 == 0)
        {
            a = a + x[i];
        }
        else
        {
            b = b + x[i];
        }
    }
    a = a * 3;
    c = a + b;
    d = c % 10;
    cout << d << endl;
    x[12] = 10 - d;
    cout << x[12] << endl;
    for (int i = 0; i < 12; i++)
    {
        cout << x[i];
    }
    return 0;
}