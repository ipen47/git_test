#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int m, n, i, j;
    cout << "�����뼯��A�ĸ�����" << endl;
    cin >> m;
    int A[m];
    cout << "�����뼯��A��" << endl;
    for (i = 0; i < m; i++)
    {
        cin >> A[i];
    }
    cout << "�����뼯��B�ĸ�����" << endl;
    cin >> n;
    int B[n];
    cout << "�����뼯��B��" << endl;
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