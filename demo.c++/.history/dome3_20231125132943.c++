#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calculateSlope(int x1, int y1, int x2, int y2)
{
    // ����б��
    return static_cast<double>(y2 - y1) / (x2 - x1);
}

double calculateAngle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    // ��������ֱ�ߵ�б��
    double slope1 = calculateSlope(x1, y1, x2, y2);
    double slope2 = calculateSlope(x3, y3, x4, y4);

    // ���б����ȣ�˵������ֱ��ƽ�л��غϣ��н�Ϊ0
    if (slope1 == slope2)
    {
        return 0.0;
    }

    // ��������AB������CD�ķ�������
    int vectorABx = x2 - x1;
    int vectorABy = y2 - y1;
    int vectorCDx = x4 - x3;
    int vectorCDy = y4 - y3;

    // ��������AB������CD�ĵ��
    double dotProduct = vectorABx * vectorCDx + vectorABy * vectorCDy;

    // ��������AB������CD��ģ
    double magnitudeAB = sqrt(vectorABx * vectorABx + vectorABy * vectorABy);
    double magnitudeCD = sqrt(vectorCDx * vectorCDx + vectorCDy * vectorCDy);

    // ����нǵ�����ֵ
    double cosTheta = dotProduct / (magnitudeAB * magnitudeCD);

    // ʹ�÷����Һ�������н�
    double angle = acos(cosTheta);

    // ������ת��Ϊ��
    angle = angle * 180.0 / M_PI;

    return angle;
}

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;

    cout << "�������A�����꣨x1 y1����";
    cin >> x1 >> y1;

    cout << "�������B�����꣨x2 y2����";
    cin >> x2 >> y2;

    cout << "�������C�����꣨x3 y3����";
    cin >> x3 >> y3;

    cout << "�������D�����꣨x4 y4����";
    cin >> x4 >> y4;

    double angle = calculateAngle(x1, y1, x2, y2, x3, y3, x4, y4);

    cout << "AB��CD����ֱ��֮��ļн��� " << fixed << setprecision(2) << angle << " ��" << endl;

    return 0;
}
