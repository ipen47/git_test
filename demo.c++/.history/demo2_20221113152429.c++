#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
       if(s>=90&&s<=100)
       cout<<'A'<<endl;
       else if(s>=80&&s<=89)
       cout<<'B'<<endl;
       else if(s>=70&&s<=79)
       cout<<'C'<<endl;
       else if(s>=60&&s<=69)
       cout<<'D'<<endl;
       else if(s>=90&&s<=100)
       cout<<'E'<<endl;
       if(s<0||s>100)
       cout<<"Score is error!"<<endl;
    }
    return 0;
}