#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c;

    // �������ж�������float����ֵ
    // ��������ȡ�Բ��Լ�������
    cin >> a >> b >> c;

    // �����������ʵ�ִ���
    /**********Program**********/
    float x1, x2;
    if ((b ^ 2) - (4 * a * c) > 0)
    {
        x1 = (-b + sqrt(b ^ 2 - 4 * a * c)) / (2 * a);
        x2 = (-b - sqrt(b ^ 2 - 4 * a * c)) / (2 * a);
        cout << x1 << " " << x2;
    }
    else if ((b ^ 2) - (4 * a * c) == 0)
    {
        x1 = -b / (2 * a);
        cout << x;
    }
    else
        cout << "������ʵ����" << ;

    /************End************/
}