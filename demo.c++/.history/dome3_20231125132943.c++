#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calculateSlope(int x1, int y1, int x2, int y2)
{
    // 计算斜率
    return static_cast<double>(y2 - y1) / (x2 - x1);
}

double calculateAngle(int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
    // 计算两条直线的斜率
    double slope1 = calculateSlope(x1, y1, x2, y2);
    double slope2 = calculateSlope(x3, y3, x4, y4);

    // 如果斜率相等，说明两条直线平行或重合，夹角为0
    if (slope1 == slope2)
    {
        return 0.0;
    }

    // 计算向量AB和向量CD的方向向量
    int vectorABx = x2 - x1;
    int vectorABy = y2 - y1;
    int vectorCDx = x4 - x3;
    int vectorCDy = y4 - y3;

    // 计算向量AB和向量CD的点乘
    double dotProduct = vectorABx * vectorCDx + vectorABy * vectorCDy;

    // 计算向量AB和向量CD的模
    double magnitudeAB = sqrt(vectorABx * vectorABx + vectorABy * vectorABy);
    double magnitudeCD = sqrt(vectorCDx * vectorCDx + vectorCDy * vectorCDy);

    // 计算夹角的余弦值
    double cosTheta = dotProduct / (magnitudeAB * magnitudeCD);

    // 使用反余弦函数计算夹角
    double angle = acos(cosTheta);

    // 将弧度转换为度
    angle = angle * 180.0 / M_PI;

    return angle;
}

int main()
{
    int x1, y1, x2, y2, x3, y3, x4, y4;

    cout << "请输入点A的坐标（x1 y1）：";
    cin >> x1 >> y1;

    cout << "请输入点B的坐标（x2 y2）：";
    cin >> x2 >> y2;

    cout << "请输入点C的坐标（x3 y3）：";
    cin >> x3 >> y3;

    cout << "请输入点D的坐标（x4 y4）：";
    cin >> x4 >> y4;

    double angle = calculateAngle(x1, y1, x2, y2, x3, y3, x4, y4);

    cout << "AB和CD两条直线之间的夹角是 " << fixed << setprecision(2) << angle << " 度" << endl;

    return 0;
}
