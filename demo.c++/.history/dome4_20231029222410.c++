#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double n;
    // 从命令行读入一个整数
    // 这个数取自测试集的输入
    n = 12.5987;
    cout << fixed << setprecision(2) << n << endl;
    //这一句就是让n保留两位小数，如果你想保留三位，就让括号里变成3.注意用这一句必须要加头文件：  #include <iostream>
    //把这一句：fixed << setprecision(2)  一定要记熟了，以后经常用到。
}
