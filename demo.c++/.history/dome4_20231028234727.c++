#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    float a, b, c;

    // 从命令行读入三个float型数值
    // 这三个数取自测试集的输入
    cin >> a >> b >> c;

    // 请在下面添加实现代码
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
        cout << "方程无实数根" << ;

    /************End************/
}