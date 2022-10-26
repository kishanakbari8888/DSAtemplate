#include<bits/stdc++.h>
#include <stdio.h>
#include "string.h"
using namespace std;
#define ll long long
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
int M = 1e9+7;


bool inte(pi &p,pi &pp)
{
    return !(p.ff>=pp.ss || p.ss<=pp.ff);
}


void solve()
{
    int n,k,x,d; cin>>n>>k>>x>>d;
    vector<pi> v[n+1];
    int m; cin>>m;
        
    for (int i = 0; i < m; ++i)
    {
        int p; cin>>p;
        int a,b; cin>>a>>b;
        v[p].pb({a,b});
    }

    int fans = 1e18;

    for(int i=0; i<=d-x; ++i)
    {
        pi p1 = {i,i+x};
        vector<int> tem;

        for(int j=1; j<=n; ++j)
        {
            int tt = 0;
            foreach(ele,v[j])
            {
                tt+=inte(p1,ele);
            }
            tem.pb(tt);
        }

        int tans = 0;
        sort(all(tem));
        // print(tem);
        for(int j=0; j<k; ++j)
            tans+=tem[j];

        fans = min(fans,tans);
    }

    cout<<fans<<endl;
        

}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<setprecision(10)<<fixed;

    int com = 0;
    int t; cin>>t;
    while(t--)
    {
        com++;
        cout<<"Case #"<<com<<": ";
        solve();
    }


    return 0;
}