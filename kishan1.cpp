#include<bits/stdc++.h>
#include <stdio.h>
#include<fstream>
#include "string.h"
using namespace std;
#define int long long
#define pb(x) push_back(x)
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
    int n;
    cin>>n;
    vi v;
    vector <vector<int>> v1;
    for (int i = 0; i < n; ++i)
    {
      int c; cin>>c;
      v.pb(c);
    }
    sort(all(v));
    int mx;
    mx=v[n-1]*v[n-2]*v[n-3]*v[n-4]*v[n-5];
    mx=max(mx,v[0]*v[1]*v[n-1]*v[n-2]*v[n-3]);
    mx=max(mx,v[0]*v[1]*v[2]*v[3]*v[n-1]);
    cout<<mx<<endl;
   	


  }
   


   return 0;
}