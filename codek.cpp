#include<bits/stdc++.h>
#include <stdio.h>
#include "string.h"
using namespace std;
#define int long long 
#define float double 
#define pb push_back
#define all(x) x.begin(),x.end() 
#define con(s1,s2) strstr(s1.c_str(),s2.c_str())
#define foreach(x,y) for(auto &x:y)
#define allr(x) x.rbegin(),x.rend()
#define sum(a) accumulate(a.begin(), a.end(), (int)0)
#define ff first
#define ss second
#define vi vector<int> 
#define pi pair<int,int>


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<setprecision(3)<<fixed;


    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);

        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        vector<string> ans(n+1,"");
        int a = 1;
        string s(v[0],'a');
        ans[0] = s;
        for(int j=0; s.size()<55; j++)
        {
            s+=(a++)%26+'a';
                a++;
        }
        ans[1] = s;
        for (int i = 1; i < n; ++i)
        {
            // cout<<i<<""
            while(s.size()>v[i]){
                a = s.back();
                s.pop_back();
            }
            for(int j=0; s.size()<55; j++)
            {
                s+=(a++)%26+'a';
                a++;
            }
            if(v[i-1]>v[i]){
                ans[i+1] = s;
                continue;
            }
            ans[i+1] = s;
        }

        if(v[0]==0)
            ans[0]='a';
        for (int i = 0; i < n+1; ++i)
        {
            cout<<ans[i]<<endl;
        }


    }



    return 0;
}