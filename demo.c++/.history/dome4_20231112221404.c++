#include <iostream>
using namespace std;
int main()
{
    int year, month, day;

    // 从命令行读入三个正整数
    // 这三个数取自测试集的输入
    cin >> year >> month >> day;

    // 请在下面添加实现代码
    /**********Program**********/
    int WeekDay = -1;
    if (1 == month || 2 == month)
    {
        month += 12;
        year--;
    }
    WeekDay = (day + 1 + 2 * month + 3 * (month + 1) / 5 + year + year / 4 - year / 100 + year / 400) % 7;
    switch (WeekDay)
    {
    case 0:
        cout << "星期天";
        break;

    case 1:
        cout << "星期一";
        break;

    case 2:
        cout << "星期二";
        break;

    case 3:
        cout << "星期三";
        break;

    case 4:
        cout << "星期四";
        break;

    case 5:
        cout << "星期五";
        break;

    case 6:
        cout << "星期六";
        break;
    }
    return 0;
}