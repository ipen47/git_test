#include <iostream>
using namespace std;
//递归输出二进制函数
void BinaryRecursion1(int n)
{
    int a[8];
    for (int i = 0; i < 8; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    for (int i = 7; i >= 0; i--)
        cout << a[i];
}
void BinaryRecursion2(int n)
{
    int a[8];
    for (int i = 0; i < 8; i++)
    {
        a[i] = n % 2;
        n = n / 2;
    }
    for (int i = 7; i >= 0; i--)
        cout << (~a[i]) + 1;
}
int main()
{

    // 从命令行读入一个int型数值
    // 这一个数取自测试集的输入

    // 请在下面添加实现代码
    /**********Program**********/
    int n;
    cin >> n;
    BinaryRecursion1(n);
    /**********  End  **********/
}