#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int m, n, i, j;
    cout << "请输入集合A的个数：" << endl;
    cin >> m;
    int A[m];
    cout << "请输入集合A：" << endl;
    for (i = 0; i < m; i++)
    {
        cin >> A[i];
    }
    cout << "请输入集合B的个数：" << endl;
    cin >> n;
    int B[n];
    cout << "请输入集合B：" << endl;
    for (j = 0; j < n; j++)
    {
        cin >> B[j];
    }
    cout << "集合A与集合B的交集为：";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (A[i] == B[j])
            {
                cout << A[i] << " ";
                break;
            }
        }
    }
    if (j == n)
        cout << "Not Found" << endl;
    return 0;
}