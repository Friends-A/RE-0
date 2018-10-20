/*
* @Author: WZY
* @School: HPU
* @Date:   2018-10-20 15:19:19
* @Last Modified by:   WZY
* @Last Modified time: 2018-10-20 17:09:48
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
const int maxn=1e6+10;
const int mod=1e9+7;
using namespace std;
struct wzy
{
	double l,r;
}p[maxn];
double x[maxn],r[maxn];
bool cmp(wzy u,wzy v)
{
	if(u.l==v.l)
		return u.r>v.r;
	return u.l<v.l;
}
inline double MAX(double a,double b)
{
	return a>b?a:b;
}
inline double MIN(double a,double b)
{
	return a<b?a:b;
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	    double _begin_time = clock();
	#endif
	int t;
	int n,w,h;
	cin>>t;
	while(t--)
	{
		cin>>n>>w>>h;
		double res=h/2.0;
		double _;
		for(int i=0;i<n;i++)
		{
			cin>>x[i]>>r[i];
			if(r[i]<=res)
				_=0.0;
			else
				_=sqrt(r[i]*r[i]*1.0-res*res*1.0);
			p[i].l=x[i]-_;
			p[i].r=x[i]+_;
		}
		sort(p,p+n,cmp);
		int ans=0;
		double vis=0.0;
		double __;
		for(int i=0;i<n;i++)
		{
			if(p[i].l<=vis)
			{
				__=p[i].r;
				while(p[i].l<=vis)
				{
					__=MAX(p[i].r,__);
					i++;
					if(i==n)
						break;
				}
				vis=__;
				i--;
				ans++;
			}
			if(vis>=w)
				break;
		}
		if(vis>=w)
			cout<<ans<<endl;
		else
			cout<<0<<endl;
	}
	#ifndef ONLINE_JUDGE
	    double _end_time = clock();
	    printf("time = %lf ms.", _end_time - _begin_time);
	#endif
	return 0;
}