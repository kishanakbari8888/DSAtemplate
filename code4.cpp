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

int32_t main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<setprecision(7)<<fixed;


    int t; cin>>t;
    while(t--)
    {
        int n; cin>>n;
        vector<int> v(n);
        // multiset<int> s;

        for (int i = 0; i < n; ++i)
            cin>>v[i];

        auto getans = [&](int ix)
        {
            multiset<int> s(all(v));
            for(int i=ix; i>0; --i)
            {
                if(s.size()==0)
                    return 0;
                auto it = s.upper_bound(i);
                if(it==s.begin())
                    return 0;

                s.erase(--it);
                if(s.size())
                    s.erase(s.begin());

            }

            return 1;

        };


        int ans = 0;
        for(int i=1; i<n+20; ++i)
        {
            if(getans(i))
                ans = i;
        }

        cout<<ans<<endl;



    }


    return 0;
}
