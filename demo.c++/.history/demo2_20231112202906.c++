// 判断五位正整数是否是回文数
int PalindromeNumberJudge(int x)
{
    int a[5];
    int i = 0;
    int q = x;
    int sum = 0, cnt = 1;
    do
    {
        a[i] = q % 10;
        q = q / 10;
        i++;
    } while (q != 0);
    for (int j = 0; j < 5; i++)
    {
        sum += a[i] * cnt;
        cnt *= 10;
    }
    cout << sum << endl;
    if (i != 5)
    {
        return 0;
    }
    else if (sum == x)
        return 1;
    else
        return -1;
}
#include <iostream>
using namespace std;

int main()
{
    int x;

    // 从命令行读入一个正整数
    // 这个数取自测试集的输入
    cin >> x;

    if (PalindromeNumberJudge(x) == 1)
    {
        cout << "该数是回文数！" << endl;
    }
    else if (PalindromeNumberJudge(x) == -1)
    {
        cout << "该数不是回文数！" << endl;
    }
    else
    {
        cout << "对不起，您输入的不是五位正整数！" << endl;
    }
}