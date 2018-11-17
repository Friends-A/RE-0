/*
* @Author: WZY
* @School: HPU
* @Date:   2018-11-17 12:17:58
* @Last Modified by:   WZY
* @Last Modified time: 2018-11-17 12:30:53
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
#define bug cout<<"-------------"<<endl
#define debug(...) cerr<<"["<<#__VA_ARGS__":"<<(__VA_ARGS__)<<"]"<<"\n"
const double E=exp(1);
const int maxn=1e6+10;
const int mod=1e9+7;
using namespace std;
char T[maxn],S[maxn];
int Next[maxn];
int slen,tlen;
void GetNext()
{
	int j,k;
	j=0;k=-1;Next[0]=-1;
	while(j<tlen)
		if(k==-1||T[j]==T[k])
			Next[++j]=++k;
		else
			k=Next[k];
}
int Kmp_Count()
{
	int ans=0;
	int i,j=0;
	if(slen==1&&tlen==1)
	{
		if(S[0]==T[0])
			return 1;
		else
			return 0;
	}
	GetNext();
	for(int i=0;i<slen;i++)
	{
		while(j>0&&S[i]!=T[j])
			j=Next[j];
		if(S[i]==T[j])
			j++;
		if(j==tlen)
		{
			ans++;
			j=Next[j];
		}
	}
	return ans;
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
	cin>>t;
	while(t--)
	{
		cin>>T;
		cin>>S;
		tlen=strlen(T);
		slen=strlen(S);
		cout<<Kmp_Count()<<endl;
	}
	#ifndef ONLINE_JUDGE
	    long _end_time = clock();
	    printf("time = %lf ms.", _end_time - _begin_time);
	#endif
	return 0;
}