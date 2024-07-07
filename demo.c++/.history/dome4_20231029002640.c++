#include <iostream>
using namespace std;

bool IsPowerOfTwo(int n)
{
    // 请在此添加实现代码
    while (!(n % 2))
    {
        n = n / 2;
        if (n == 1)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    int n;
    // 从命令行读入一个整数
    // 这个数取自测试集的输入
    cin >> n;
    IsPowerOfTwo(n) == true ? (cout << "Yes" << endl) : (cout << "No" << endl);
}