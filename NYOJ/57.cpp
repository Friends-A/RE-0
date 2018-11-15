/*************************************************************************
    > File Name: 57.cpp
    > Author: WZY
    > School: HPU 
    > Created Time: 2018年11月15日 11:01:48
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
int a[10];
inline int change(int n)
{
	a[0]=n/1000;
	a[1]=(n/100)%10;
	a[2]=(n/10)%10;
	a[3]=n%10;
	int res1=0,res2=0;
	sort(a,a+4);
	res1=a[0]*1000+a[1]*100+a[2]*10+a[3];
	res2=a[0]+a[1]*10+a[2]*100+a[3]*1000;
	return res2-res1;
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int ans=1;
		int res=n;
		while(1)
		{
			if(res==change(res))
				break;
			else
				res=change(res);
			ans++;
			//cout<<"--------"<<res<<endl;
			/*if(res==n)
				break;
			if(ans==100)
				break;*/
		}
		cout<<ans<<endl;
	}
	return 0;
}
