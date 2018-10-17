/*
* @Author: WZY
* @School: HPU
* @Date:   2018-10-17 17:48:27
* @Last Modified by:   WZY
* @Last Modified time: 2018-10-17 17:51:38
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
int a[maxn];
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	    double _begin_time = clock();
	#endif
	int t;
	int w,n;
	cin>>t;
	while(t--)
	{
		ms(a);
		cin>>w>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		int j=n-1;
		int ans=0;
		for(int i=0;i<n;)
		{
			if(i>j)
				break;
			if(a[i]+a[j]>w)
			{
				j--;
				ans++;
			}
			else
			{
				i++;
				j--;
				ans++;
			}
		}
		cout<<ans<<endl;
	}
	#ifndef ONLINE_JUDGE
	    long _end_time = clock();
	    printf("time = %lf ms.", _end_time - _begin_time);
	#endif
	return 0;
}