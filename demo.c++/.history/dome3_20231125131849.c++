#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define pi 3.1415926;
double calculateAngle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    // ��������AB������CD�ķ�������
    int ABx = x2 - x1;
    int ABy = y2 - y1;
    int CDx = x4 - x3;
    int CDy = y4 - y3;

    // ��������AB������CD�ĵ��
    double dotProduct = ABx * CDx + ABy * CDy;

    // ��������AB������CD��ģ
    double modAB = sqrt(ABx * ABx + ABy * ABy);
    double modCD = sqrt(CDx * CDx + CDy * CDy);

    // ����нǵ�����ֵ
    double cos = dotProduct / (modAB * modCD);

    // ʹ�÷����Һ�������н�
    double angle = acos(cos);

    // ������ת��Ϊ��
    angle = angle * 180.0 / pi;

    return angle;
}

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;

    cin >> x1 >> y1;

    cin >> x2 >> y2;

    cin >> x3 >> y3;

    cin >> x4 >> y4;

    double angle = calculateAngle(x1, y1, x2, y2, x3, y3, x4, y4);

    cout << fixed << setprecision(2) << angle << endl;

    return 0;
}
