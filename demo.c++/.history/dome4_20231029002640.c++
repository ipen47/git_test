#include <iostream>
using namespace std;

bool IsPowerOfTwo(int n)
{
    // ���ڴ����ʵ�ִ���
    while (!(n % 2))
    {
        n = n / 2;
        if (n == 1)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    // �������ж���һ������
    // �����ȡ�Բ��Լ�������
    cin >> n;
    IsPowerOfTwo(n) == true ? (cout << "Yes" << endl) : (cout << "No" << endl);
}