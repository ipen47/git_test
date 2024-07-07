#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int m, n, i, j;
    cout << "�����뼯��A�ĸ�����" << endl;
    cin >> m;
    int A[m];
    cout << "璇疯緭鍏ラ泦鍚圓锛�" << endl;
    for (i = 0; i < m; i++)
    {
        cin >> A[i];
    }
    cout << "璇疯緭鍏ラ泦鍚圔鐨勪釜鏁帮細" << endl;
    cin >> n;
    int B[n];
    cout << "璇疯緭鍏ラ泦鍚圓锛�" << endl;
    for (j = 0; j < n; j++)
    {
        cin >> B[j];
    }
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