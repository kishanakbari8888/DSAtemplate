#include<bits/stdc++.h>
#include <stdio.h>
#include "string.h"
using namespace std;
#define int long long
#define endl '\n' 
#define pb push_back
#define all(x) x.begin(),x.end() 
#define con(s1,s2) strstr(s1.c_str(),s2.c_str())
#define foreach(x,y) for(auto &x:y)
#define allr(x) x.rbegin(),x.rend()
#define sum(v) accumulate(all(v),(int)0)
#define ff first
#define ss second
#define pi pair<int,int>
int M = 999983;



int fpower(int a,int n)
{
    int p=1;
    while(n>0)
    {
        if(n&1)
            p=((p%M)*(a%M))%M;
        a=((a%M)*(a%M))%M;
        n=n>>1;
    }
    return p;
}


int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<setprecision(7)<<fixed;


    vector<int> fa(5e5+100,1);
    for(int i=2; i<fa.size(); ++i)
    {
        fa[i] = (fa[i-1]*i)%M;
    }


    int n,x; cin>>n>>x;
    int ans = 0;
    for(int i=0; i<n; ++i)
    {
        int tem; cin>>tem;
        ans+=fa[tem];
        ans%=M;
    }


    int check = 0;
    x = fa[x];
    for(int i=1; i<1e6 && check==0; ++i)
    {
        if((ans-i*x)%M==0 && ans-i*x>=0)
            check = 1;
    }

    if(check)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;








    


    return 0;
}