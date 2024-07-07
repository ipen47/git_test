
#include<iostream>
using namespace std;
#include<cmath>
#include<string>
int n,m;
const int N = 15000;
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int KnapSack(int w[],int v[],int x[],int n,int C)
{
    int V[n+1][m+1];
    
	int i,j;
	for(i=0;i<=n;i++)//初始化第0列
		V[i][0]=0;
	for(j=0;j<=C;j++)//初始化第0行
		V[0][j]=0;
	for(i=1;i<=n;i++)//计算第i行，进行第i次迭代
	{
		for(j=1;j<=C;j++)
		{
			if(j<w[i-1])
				V[i][j]=V[i-1][j];
			else
				V[i][j]=max(V[i-1][j],V[i-1][j-w[i-1]]+v[i-1]);
		}
	}
	for(i=n,j=C;i>0;i--)//求装入背包的物品
	{
		if(V[i][j]>V[i-1][j])
		{
			x[i-1]=1;
			j=j-w[i-1];
		}
		else
			x[i-1]=0;
	}
	return V[n][C];//返回背包取得的最大价值
}
int main()
{
    
    cin>>n;
    cin>>m;
	int w[N],v[N];
    int x[n];
	for(int i=0;i<n;i++)
    {
        cin>>w[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
	cout<<KnapSack(w,v,x,n,m)<<endl;

	for(int i=0;i<n;i++)
	{
		if(x[i]==1)
			cout<<"x"<<i+1<<' ';
	}
	return 0;
}

