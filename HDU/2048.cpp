/*
* @Author: WZY
* @School: HPU
* @Date:   2018-02-26 22:29:35
* @Last Modified by:   WZY
* @Last Modified time: 2018-10-17 17:35:33
*/
/**
 * 坑点：打表用到的a[i]要用long long，输出时要用到转义字符输出%
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
ll a[maxn];
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	    double _begin_time = clock();
	#endif
	int t;
	int n;
	ms(a);
	a[0]=a[1]=0;a[2]=1;
	for(int i=3;i<=21;i++)
		a[i]=(i-1)*(a[i-1]+a[i-2]);
	cin>>t;
	while(t--)
	{
		cin>>n;
		double ans=1.0;
		for(int i=1;i<=n;i++)
			ans*=i;
		printf("%.2lf%%\n",a[n]*100.0/ans);
	}
	#ifndef ONLINE_JUDGE
	    long _end_time = clock();
	    printf("time = %lf ms.", _end_time - _begin_time);
	#endif
	return 0;
}