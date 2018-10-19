/*
* @Author: WZY
* @School: HPU
* @Date:   2018-10-19 19:56:43
* @Last Modified by:   WZY
* @Last Modified time: 2018-10-19 20:00:21
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
const int maxn=1e5+10;
const int mod=1e9+7;
using namespace std;
int a[maxn];
inline void init()
{
	ms(a,0);
	for(int i=1;i<maxn;i++)
	{
		for(int j=1;j*i<maxn;j++)
		{
			if(a[i*j])
				a[i*j]=0;
			else
				a[i*j]=1;
			// a[i*j]=~a[i*j];
		}
		// a[i]=~a[i];
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
	int n;
	init();
	while(cin>>n)
	{
		cout<<a[n]<<endl;
	}
	#ifndef ONLINE_JUDGE
	    double _end_time = clock();
	    printf("time = %lf ms.", _end_time - _begin_time);
	#endif
	return 0;
}