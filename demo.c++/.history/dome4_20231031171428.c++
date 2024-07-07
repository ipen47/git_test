#include <iostream>
using namespace std;
//递归输出二进制函数
void BinaryRecursion1(int n) //正整数
{
    int a;
    a = n % 2;  // 取余
    n = n >> 1; //右移一位 相当于除以2
    if (0 != n)
    {
        BinaryRecursion1(n);
    }
    cout << a;
}
void BinaryRecursion2(int n) //负整数
{
    int a;
    a = n % 2;  // 取余
    n = n >> 1; //右移一位 相当于除以2
    if (0 != n)
    {
        BinaryRecursion2(n);
    }
    a = !a + 1;
    cout << a;
}
int main()
{

    // 从命令行读入一个int型数值
    // 这一个数取自测试集的输入

    // 请在下面添加实现代码
    /**********Program**********/
    int n;
    cin >> n;
    if (n >= 0)
    {
        BinaryRecursion1(n);
    }
    else
    {
        BinaryRecursion1(abs(n));
    }

    /**********  End  **********/
}