#include<bits/stdc++.h>
#include <stdio.h>
#include <atomic>
#include "string.h"
using namespace std;
#define int long long 
int M=1e9+7;

class graph{

public:
	int data;
	vector<int> *v;
	graph(int d)
	{
		data=d;
		v=new vector<int> [data];
	}
	void addve(int a,int b){
		v[a].push_back(b);
		// v[b].push_back(a);
	}

	void printt()
	{
		for (int i = 0; i < data; ++i)
		{
			print(v[i]);
		}
	}

	void BSF(int st)
	{
		vector<bool> vis(data);
		queue<int> q;
		q.push(st);
		while(q.size())
		{
			int a = q.front();
			cout<<a<<" ";
			q.pop();
			vis[a]=1;
			for (int i = 0; i < v[a].size(); ++i){
				if(!vis[v[a][i]]){
					vis[v[a][i]]=1;
					q.push(v[a][i]);
				}
			}
		}

	}
};

int32_t main()
{
	graph *g = new graph(4);
	g->addve(0,1);
	g->addve(0,2);
	g->addve(2,2);
	g->addve(2,3);
	g->addve(3,3);
	g->addve(1,2);

	g->printt();
	g->BSF(0);



	    

    return 0;
}