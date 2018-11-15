/*************************************************************************
    > File Name: 77.cpp
    > Author: WZY
    > School: HPU 
    > Created Time: 2018年11月15日 10:31:47
 ************************************************************************/

#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define ms(a,b) memset(a,b,sizeof(a))
#define pi acos(-1.0)
#define INF 0x7f7f7f7f
const double E=exp(1);
const int maxn=1e6+10;
const int mod=1e9+7;
using namespace std;
int a[maxn];
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++)
		a[i]=1;
	for(int i=2;i<=k;i++)
	{
		for(int j=1;j<=n;j++)
			if(j%i==0)
				a[j]=a[j]?0:1;
	}
	int flag=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i])
		{
			if(flag)
				cout<<" ";
			else
				flag++;
			cout<<i;
		}
	}
	cout<<endl;
	return 0;
}
