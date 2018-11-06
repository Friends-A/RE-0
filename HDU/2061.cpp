/*
* @Author: WZY
* @School: HPU
* @Date:   2018-11-06 14:24:28
* @Last Modified by:   WZY
* @Last Modified time: 2018-11-06 14:54:56
*/
#include <stdio.h>
#include <iomanip>
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
int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	    double _begin_time = clock();
	#endif
	int t;
	int n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		double ans=0.0;
		char ch[50];
		double a,b;
		int flag=0;
		double sum=0.0;
		while(n--)
		{
			scanf("%s %lf%lf",ch,&a,&b);
			if(b<60&&b>=0)
				flag++;
			sum+=a;
			ans+=a*b;
		}
		if(flag)
			printf("Sorry!\n");
		else
			printf("%.2lf\n",ans*1.0/(sum*1.0));
		if(t)
			printf("\n");
	}
	#ifndef ONLINE_JUDGE
	    long _end_time = clock();
	    printf("time = %lf ms.", _end_time - _begin_time);
	#endif
	return 0;
}