#include<iostream>
using namespace std;

int main()
{
    int x,num,i;

    // �������ж���һ��������100000��������
    // �����ȡ�Բ��Լ�������
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
    
    // �����������ʵ�ִ���
    /**********Program**********/
  

    /**********  End  **********/
}