#include<iostream>
using namespace std;

int main()
{
    int x,num,i;

    // 从命令行读入一个不大于100000的正整数
    // 这个数取自测试集的输入
    cin >> x;
    do 
    {
        num=x%10;
         cout<<num;
        x=x/10;
        i++;
    }
    while(x!=0);
    cout<<" "<<i<<endl;
    return 0;
    
    // 请在下面添加实现代码
    /**********Program**********/
  

    /**********  End  **********/
}