
#include <bits/stdc++.h>
using namespace std;
// int jie(int n)
// {
//     if(n<=1)
//     return 1;
//     return n*jie(n-1);
// }
// int main()
// {   
//     int n ;
//     long sum;
//     cin>>n;
//    for(int i=1;i<=n;i++)
//    {
//        sum +=jie(i);
//    }
//    cout<<sum;
// }

int main()
{
    int n,sum=0,res=0;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        sum += a[i];
    }
    
    for(int i=1;i<n;i++)
    {
       res=max(res,(sum-a[i]-a[i-1]+a[i]*a[i-1]));
    }
    cout<<res;
    return 0;
}