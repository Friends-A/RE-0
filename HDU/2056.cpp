/*
* @Author: WZY
* @School: HPU
* @Date:   2018-10-19 20:04:11
* @Last Modified by:   WZY
* @Last Modified time: 2018-10-19 20:20:28
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
	double x[10],y[10];
	while(cin>>x[1]>>y[1]>>x[2]>>y[2]>>x[3]>>y[3]>>x[4]>>y[4])
	{
		if(x[1]>x[2])
			swap(x[1],x[2]);
		if(y[1]>y[2])
			swap(y[1],y[2]);
		if(x[3]>x[4])
			swap(x[3],x[4]);
		if(y[3]>y[4])
			swap(y[3],y[4]);
		double x1=x[1]>x[3]?x[1]:x[3];
		double y1=y[1]>y[3]?y[1]:y[3];
		double x2=x[2]>x[4]?x[4]:x[2];
		double y2=y[2]>y[4]?y[4]:y[2];
		if(x2<x1 || y2<y1) 
			cout<<"0.00"<<endl;
		else
			printf("%.2f\n",(x2-x1)*(y2-y1));
	}
	#ifndef ONLINE_JUDGE
	    double _end_time = clock();
	    printf("time = %lf ms.", _end_time - _begin_time);
	#endif
	return 0;
}