/*
* @Author: WZY
* @School: HPU
* @Date:   2018-10-16 19:47:17
* @Last Modified by:   WZY
* @Last Modified time: 2018-10-16 19:54:36
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
const int maxn=1e3+10;
const int mod=1e9+7;
using namespace std;
int vis[maxn];
bool cmp(int a,int b)
{
	return a>b;
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	    double _begin_time = clock();
	#endif
	int t,n;
	cin>>t;
	while(t--)
	{
		ms(vis,0);
		cin>>n;
		int l,r;
		for(int i=0;i<n;i++)
		{
			cin>>l>>r;
			if(l>r)
				swap(l,r);
			int L=(l+1)/2;
			int R=(r+1)/2;
			for(int j=L;j<=R;j++)
				vis[j]++;
		}
		sort(vis,vis+maxn,cmp);
		cout<<vis[0]*10<<endl;
	}
	#ifndef ONLINE_JUDGE
	    double _end_time = clock();
	    printf("time = %lf ms.", _end_time - _begin_time);
	#endif
	return 0;
}
