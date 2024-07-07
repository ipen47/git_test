#include <iostream>
using namespace std;
bool IsSqrt(int n)
{
    // 请在此添加实现代码
    for (int i = 1; i <= n; i++)
    {
        if (n == (i * i))
        {
            return true;
            break;
        }
    }
    return false;
}
int main()
{
    int n;
    // 从命令行读入一个int型数值
    // 这个数取自测试集的输入
    cin >> n;
    if (IsSqrt(n))
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}