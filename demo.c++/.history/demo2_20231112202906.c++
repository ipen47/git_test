// �ж���λ�������Ƿ��ǻ�����
int PalindromeNumberJudge(int x)
{
    int a[5];
    int i = 0;
    int q = x;
    int sum = 0, cnt = 1;
    do
    {
        a[i] = q % 10;
        q = q / 10;
        i++;
    } while (q != 0);
    for (int j = 0; j < 5; i++)
    {
        sum += a[i] * cnt;
        cnt *= 10;
    }
    cout << sum << endl;
    if (i != 5)
    {
        return 0;
    }
    else if (sum == x)
        return 1;
    else
        return -1;
}
#include <iostream>
using namespace std;

int main()
{
    int x;

    // �������ж���һ��������
    // �����ȡ�Բ��Լ�������
    cin >> x;

    if (PalindromeNumberJudge(x) == 1)
    {
        cout << "�����ǻ�������" << endl;
    }
    else if (PalindromeNumberJudge(x) == -1)
    {
        cout << "�������ǻ�������" << endl;
    }
    else
    {
        cout << "�Բ���������Ĳ�����λ��������" << endl;
    }
}