#include <iostream>
#include <cmath>

using namespace std;
int mian()
{
    int m, n, i, j;
    cin >> m;
    int A[m];
    for (i = 0; i < m; i++)
    {
        cin >> A[i];
    }
    cin >> n;
    int B[n];
    for (j = 0; j < n; j++)
    {
        cin >> B[j];
    }
    for (i = 0; i < m; i++)
    {
        for (j = 0; i < n; j++)
        {
            if (A[i] == B[j])
            {
                cout << A[i] << " ";
                break;
            }
        }
    }
    if (j > n)
        cout << "Not Found" << endl;
    return 0;
}