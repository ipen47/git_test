// �ж���λ�������Ƿ��ǻ�����
#include <iostream>
using namespace std;
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
    a[0] = x % 10;         /*ȡ��λ*/
    a[1] = x % 100 / 10;   /*ȡʮλ*/
    a[2] = x % 1000 / 100; /*ȡ��λ*/
    a[3] = x / 1000 % 10;  /*ȡǧλ*/
    a[4] = x / 10000;      /*ȡ��λ*/
    if (i != 5)
        return 0;
    else if (a[0] == a[4] && a[1] == a[3])
        return 1;
    else
        return -1;
}

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