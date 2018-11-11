/*
* @Author: WZY
* @School: HPU
* @Date:   2018-11-11 15:02:40
* @Last Modified by:   WZY
* @Last Modified time: 2018-11-11 16:06:05
*/
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
#include <math.h>
#include <limits.h>
#include <map>
#include <stack>
#include <queue>
#include <vector>
#include <set>
#include <string>
#include <time.h>
#define ll long long
#define ull unsigned long long
#define ms(a,b) memset(a,b,sizeof(a))
#define pi acos(-1.0)
#define INF 0x7f7f7f7f
#define lson o<<1
#define rson o<<1|1
#define bug cout<<"---------"<<endl
#define debug(...) cerr<<"["<<#__VA_ARGS__":"<<(__VA_ARGS__)<<"]"<<"\n"
const double E=exp(1);
const ll maxn=1e6+10;
const int mod=1e9+7;
using namespace std;
// F[n]=(F[n-1]+1)*n
ll F(ll n)
{
	if(n<=1)
		return n;
	return (F(n-1)+1)*n;
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	    double _begin_time = clock();
	#endif
	ll n,m;
	ll a[30];	
	while(cin>>n>>m)
	{
		for(int i=1;i<30;i++)
			a[i]=i;
		int flag=0;
		while(m>0)
		{
			ll k=F(n-1)+1;	//记录每行有多少个集合
			int res=m/k+1;	//记录在第几行
			if(m%k==0)		//在上一行
				res--;
			if(flag)
				cout<<" ";
			cout<<a[res];
			for(int i=res;i<=n;i++)
				a[i]=a[i+1];
			m-=k*(res-1)+1;
			n--;
			flag++;
		}
		cout<<endl;
	}
	#ifndef ONLINE_JUDGE
	    double _end_time = clock();
	    printf("time = %lf ms.", _end_time - _begin_time);
	#endif
	return 0;
}