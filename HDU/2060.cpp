/*
* @Author: WZY
* @School: HPU
* @Date:   2018-10-22 16:36:14
* @Last Modified by:   WZY
* @Last Modified time: 2018-10-22 17:02:02
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
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	#ifndef ONLINE_JUDGE
	    freopen("in.txt", "r", stdin);
	    freopen("out.txt", "w", stdout);
	    double _begin_time = clock();
	#endif
	int t;
	ll Ball_Left,P_Score,O_Score;
	cin>>t;
	while(t--)
	{
		cin>>Ball_Left>>P_Score>>O_Score;
		ll sum=0;
		if(Ball_Left<=6)
			for(int i=1;i<=Ball_Left;i++)
				sum+=8-i;
		else
		{
			sum+=8*(Ball_Left-6);
			sum+=27;
		}
		if(sum+P_Score>=O_Score)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	#ifndef ONLINE_JUDGE
	    long _end_time = clock();
	    printf("time = %lf ms.", _end_time - _begin_time);
	#endif
	return 0;
}