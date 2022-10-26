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
int M = 1e9+7;



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

class op{
public:
    static vector<int> prime(int n)
    {   vector<int> v; vector<bool> b(n+1);
        for (int i=2;i*i<=n;++i){if(!b[i]){for(int j=i*i;j<n+1;j+=i){b[j]=1;};};};
        for (int i=2;i<n+1;++i){if(!b[i])v.pb(i);};
        return v;
    }

    static vector<pair<int,int>> divison(int n)
    {   vector<pair<int,int>> v;
        for (int i=2;i*i<=n;++i){
            int com = 0;
            while(!(n%i))
            {
                com++;
                n/=i;
            }
            
            if(com>0){
                v.push_back({i,com});
            }
        }
        if(n>1){v.push_back({n,1});}; return v;
    }

};



int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<setprecision(7)<<fixed;


    vector<int> pri = op::prime(1e6);
    cout<<pri.back()<<" ";

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
