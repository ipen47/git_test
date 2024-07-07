#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
#define pi 3.1415926;
double calculateAngle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    // 计算向量AB和向量CD的方向向量
    int ABx = x2 - x1;
    int ABy = y2 - y1;
    int CDx = x4 - x3;
    int CDy = y4 - y3;

    // 计算向量AB和向量CD的点乘
    double dotProduct = ABx * CDx + ABy * CDy;

    // 计算向量AB和向量CD的模
    double modAB = sqrt(ABx * ABx + ABy * ABy);
    double modCD = sqrt(CDx * CDx + CDy * CDy);

    // 计算夹角的余弦值
    double cos = dotProduct / (modAB * modCD);

    // 使用反余弦函数计算夹角
    double angle = acos(cos);

    // 将弧度转换为度
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
