/*************************************************************************
	> File Name: 218.cpp
	> Author: WZY
	> QQ : 2697097900
	> Created Time: 2018年11月20日 星期二 17时38分08秒
 ************************************************************************/

#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define ms(a,b) memset(a,b,sizeof(a))
#define pi acos(-1,0)
#define INF 0x7f7f7f7f
#define debug(...) cerr<<"["<<#__VA_ARGS__":"<<(__VA_ARFS__)<<"]"<<"\n"
#define bug cout<<"-------------"<<endl
const int maxn=1e6+10;
const double E=exp(1);
const int mod=1e9+7;
using namespace std;
char ch[maxn][50];
int vis[maxn];
int main()
{
	ios::sync_with_stdio(false);
	int n;
    while(cin>>n)
    {
        ms(ch,0);
        ms(vis,0);
        for(int i=0;i<n;i++)
        {
            cin>>ch[i];
            if(strcmp(ch[i],"bowl")==0||strcmp(ch[i],"knife")==0||strcmp(ch[i],"fork")==0||strcmp(ch[i],"chopsticks")==0)
                vis[i]=1;
        }
        int flag=0;
        for(int i=0;i<n;i++)
        {
            if(vis[i])
            {
                if(flag)
                    cout<<" ";
                else
                    flag++;
                cout<<ch[i];
            }
        }
        cout<<endl;
    }
	return 0;
}
