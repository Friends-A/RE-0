/*
* @Author: WZY
* @School: HPU
* @Date:   2018-10-16 19:17:22
* @Last Modified by:   WZY
* @Last Modified time: 2018-10-16 19:26:32
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
	int l,r;
}p[maxn];
bool cmp(wzy u,wzy v)
{
	if(u.r==v.r)
		return u.l>v.l;
	return u.r<v.r;
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
	int n;
	cin>>t;
	while(t--)
	{
		ms(p,0);
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>p[i].l>>p[i].r;
		sort(p,p+n,cmp);
		int ans=1;
		for(int i=1,t=p[0].r;i<n;i++)
		{
			if(t<p[i].l)
			{
				ans++;
				t=p[i].r;
			}
		}
		cout<<ans<<endl;
	}	
	#ifndef ONLINE_JUDGE
	    double _end_time = clock();
	    printf("time = %lf ms.", _end_time - _begin_time);
	#endif
	return 0;
}