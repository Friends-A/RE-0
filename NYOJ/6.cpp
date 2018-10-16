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
double a[maxn];
bool cmp(double a,double b)
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
	int t;
	int n;
	cin>>t;
	while(t--)
	{
		double s=20.0;
		cin>>n;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n,cmp);
		int ans=0;
		for(int i=0;i<n;i++)
		{
			s-=2*sqrt(a[i]*a[i]-1) ;
			ans++;
			if(s<=0)
				break;
		}
		cout<<ans<<endl;
	}
	#ifndef ONLINE_JUDGE
	    double _end_time = clock();
	    printf("time = %lf ms.", _end_time - _begin_time);
	#endif
	return 0;
}