/*
* @Author: WZY
* @School: HPU
* @Date:   2018-10-19 20:21:57
* @Last Modified by:   WZY
* @Last Modified time: 2018-10-19 20:39:18
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
int main(int argc, char const *argv[])
{
	// ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	    double _begin_time = clock();
	#endif
	int n,m;
	while(cin>>n>>m)
	{
		if(n==0&&m==0)
			break;
		for(int i=sqrt(2*m);i>0;i--)
		{
			if(2*m%i==0&&(2*m/i-1+i)%2==0)
			{
				int b=(i-1+2*m/i)/2;
				int a=2*m/i-b;
				printf("[%d,%d]\n",min(a,b),max(a,b));
			}
		}
		printf("\n");
	}
	#ifndef ONLINE_JUDGE
	    double _end_time = clock();
	    printf("time = %lf ms.", _end_time - _begin_time);
	#endif
	return 0;
}