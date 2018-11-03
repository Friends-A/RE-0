/*
* @Author: WZY
* @School: HPU
* @Date:   2018-10-22 17:12:37
* @Last Modified by:   WZY
* @Last Modified time: 2018-10-22 22:48:31
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
#define ms(a) memset(a,0,sizeof(a))
#define pi acos(-1.0)
#define INF 0x7f7f7f7f
#define lson o<<1
#define rson o<<1|1
#define bug cout<<"-------------"<<endl
#define debug(...) cerr<<"["<<#__VA_ARGS__":"<<(__VA_ARGS__)<<"]"<<"\n"
const double E=exp(1);
const int maxn=1e6+10;
const int mod=1e9+7;
using namespace std;
int a[maxn],b[maxn];
int k;
inline void init()
{
	k=0;
	for(int i=1;i<1000;i++)
	{
		if(i&1)
		{
			for(int j=1;j<i;j++)
			{
				a[++k]=j,b[k]=i-j;
				if(k>=maxn)
					return;
			}
		}
		else
		{
			for(int j=i-1;j>=1;j--)
			{
				a[++k]=j,b[k]=i-j;
				if(k>=maxn)
					return;
			}
		}
	}
}
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	    double _begin_time = clock();
	#endif
	init();
	int t;
	// for(int i=1;i<1000;i++)
	// {
	// 	debug(i);
	// 	debug(a[i]);
	// 	debug(b[i]);
	// }
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		cout<<a[n]<<"/"<<b[n]<<endl;
	}
	#ifndef ONLINE_JUDGE
	    long _end_time = clock();
	    printf("time = %lf ms.", _end_time - _begin_time);
	#endif
	return 0;
}