#include<bits/stdc++.h>
#include <stdio.h>
#include<fstream>
#include "string.h"
using namespace std;
#define int long long
// #define pb(x) push_back(x)
#define all(x) x.begin(),x.end() 
#define allr(x) x.rbegin(),x.rend()
#define vi vector<int> 
#define sum(a) accumulate(a.begin(), a.end(), 0)
#define fo(i,n) for(int i=0; i<n ; i++)
#define input(v,n); for(int i=0; i<n ; i++){int c;cin>>c;v.pb(c);} 
#define ff first
#define ss second
#define pi pair<int,int>
#define vi vector<int>

 
int32_t main()
{
	
	int t;
    cin>>t;
    while(t--)
    {
     	 vector<int> v;
        int n=height.size();
        height.push_back(0);
        for(int i=0; i<n-1 ; i++)
        {
            vector<int> vv;
            vv.push_back(height[i]);
            int j;
            int mx=0;
            for(j=i+1; j<n; j++)
            {
                vv.push_back(height[j]);
                if(height[i]<=height[j] ||  mx<=height[j+1]  )
                    break;
                mx=max(mx,height[j]);
            }
            int w=vv.size()-2;
            int h=abs(v[0]-v[vv.size()-1]);
            int tt=w*h;
            for(int k=1; k<w+1; k++)
            {
                tt-=vv[k];
            }
            v.push_back(tt);
            i=j;
            
        }
        int sum=0;
        for(int i=0; i<v.size(); i++)
            sum+=v[i];
        return sum;
        

    }
   return 0;
}