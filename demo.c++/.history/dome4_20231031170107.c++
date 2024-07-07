#include <iostream>
using namespace std;
//递归输出二进制函数
void BinaryRecursion(int n)
{
    int a;
    a = n % 2;  // 取余
    n = n >> 1; //右移一位 相当于除以2
    if (0 != n)
    {
        BinaryRecursion(n);
    }
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
    BinaryRecursion(n);

    /**********  End  **********/
}