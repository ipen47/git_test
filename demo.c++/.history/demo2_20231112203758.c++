// 判断五位正整数是否是回文数
#include <iostream>
using namespace std;
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
    a[0] = x % 10;         /*取个位*/
    a[1] = x % 100 / 10;   /*取十位*/
    a[2] = x % 1000 / 100; /*取百位*/
    a[3] = x / 1000 % 10;  /*取千位*/
    a[4] = x / 10000;      /*取万位*/
    if (i != 5)
        return 0;
    else if (a[0] == a[4] && a[1] == a[3])
        return 1;
    else
        return -1;
}

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