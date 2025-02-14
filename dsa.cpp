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
#define pi pair<int,int>
int M = 1e9+7;

int fu(int n)
{
    if(n==0 || n==1)
        return 1;
    return n*fu(n-1);
}

void f4()
{
    cout<<"I am fourth"<<endl;
}

void f3()
{
    f4();
    cout<<"I am third"<<endl;
}

void f2()
{
    f3();
    cout<<"I am two"<<endl;
}

void f1()
{
    f2();
    cout<<"I am one"<<endl;
}


int add(int n)
{
    if(n==0)
        return 0;
    return n+add(n-1);
}

int fib(int n)
{
    if(n==0 || n==1)
        return 1;

    return fib(n-1)+fib(n-2);
}

int pro(vector<int> &v)
{
    if(v.size()==0)
        return 1;
    int a = v.back();
    v.pop_back();
    return a*pro(v);
}

int HCF(int a,int b)
{
    if(b%a==0)
        return a;
    return HCF(b,a%b);
}

bool ispalin(string s)
{
    for (int i = 0; i < s.size()/2; ++i)
    {
        if(s[i]!=s[s.size()-1-i])
            return 0;
    }
    return 1;
}

string rev(string s)
{
    for (int i = 0; i < s.size()/2; ++i)
    {
        swap(s[i],s[s.size()-1-i]);
    }
    return s;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<setprecision(2)<<fixed;

    cout<<fu(5)<<endl; 

    f1();

    cout<<add(12)<<endl;

    cout<<fib(3)<<endl;

    vector<int> v{1,2,3,4};
    cout<<pro(v)<<endl;

    cout<<HCF(8,30)<<endl;

    cout<<ispalin("kishan")<<endl;
    
    cout<<rev("reverse")<<endl;


    return 0;
}