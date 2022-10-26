#include<bits/stdc++.h>
using namespace std;
#define int long long int
int M=1000000007;

int modInverse(int a,int n)
{
    int r1=n,r2=a;
    int t1=0,t2=1;
    int q,t,r;
    //int k3;
    while(r2>0)
    {
        q=r1/r2;
        r=r1%r2;
        t=t1-q*t2;
        r1=r2,r2=r;
        t1=t2,t2=t;
    }
    return (t1+n)%n;
}

bool issubstri(string s,string ss)
{
    int a = 0;
    for (int i = 0; i <(s.size()) && a<(ss.size()) ; ++i)
        if(s[i]==ss[a])
            a++;
    return a==m;
}

int binri(vector<int> v,int k)
{
    int r=0; int l=v.size();
    while(r<=l)
    {
        int mid = r+(l-r)/2;

        if(v[mid]>k)
            l=mid-1;
        else
            r=mid+1;
    }

    return l;
}

int stoii(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size(); ++i)
        ans = ans*10 + (s[i]-'0');

    return ans;
}


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

int nfoc(int n)
{
    int ans = 1;
    for (int i = 0; i < n; ++i)
        ans = (ans*(i+1))%M;

    return ans;
}

int ncr(int n,int r)
{
    if(n-r<0)
        return 0;
    int ans = ((nfoc(n)*fpower(nfoc(r),M-2)%M)%M*fpower(nfoc(n-r),M-2)%M)%M;
    return ans;
}


int Ufun(vector<int> &v,int t)
{
    int a=-1;
    if(v.size()==0)
        return a;
    int l=0,r=v.size()-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(v[m]>t)
        {
            a=m;
            r=m-1;
        }
        else
            l=m+1;
    }
    return a;
}

int Lfun(vector<int> &v,int t)
{
    int a=-1;
    if(v.size()==0)
        return a;
    int l=0,r=v.size()-1;
    while(l<=r)
    {
        int m=(l+r)/2;
        if(v[m]<t)
        {
            a=v[m];
            l=m+1;
        }
        else
            r=m-1;
    }
    return a;
}


int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<setprecision(10)<<fixed;
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    
    return 0;
}

