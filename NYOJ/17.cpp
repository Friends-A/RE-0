#include <bits/stdc++.h>
#define ll long long
#define ms(a,b) memset(a,b,sizeof(a))
#define INF 0x7f7f7f7f
const int maxn=1e6+10;
using namespace std;
char ch[maxn];
char dp[maxn];
int main(int argc, char const *argv[])
{
	ios::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--)
	{
		ms(ch,0);
		cin>>ch;
		int l=strlen(ch);
		dp[0]=ch[0];
		int pos;
		int L=1;
		for(int i=0;i<l;i++)
		{
			pos=lower_bound(dp,dp+L,ch[i])-dp;
			dp[pos]=ch[i];
			L=max(L,pos+1);
		}
		cout<<L<<endl;
	}
	return 0;
}