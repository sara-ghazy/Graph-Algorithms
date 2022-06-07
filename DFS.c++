#define _CRT_SECURE_NO_WARNINGS
#include <bits/stdc++.h>
#include<unordered_map>
using namespace std;
int dx[] = { 0, 0, -1, 1, 1, 1, -1, -1 };
int dy[] = { 1, -1, 0, 0, 1, -1, -1, 1 };
#define endl '\n'
#define mod 1000000007
const long double P = 3.141592653589793238L;
void F()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
    //freopen("ou.txt", "w", stdout);
#endif
}

long long fast_power(long long x, long long y, long long modd)
{
    long long p = 1;
    while (y)
    {
        if (y & 1)
            p = (p*x) % modd;
        y = (y >> 1); //y/=2
        x = (x*x) % modd;
    }

    return p;
}


 int n,q,visited[100002],result=0; vector<int>edge[100002];

  void DFS(int node)
  {
      visited[node]=1;

      for(auto neighbor:edge[node])
      {
          if(!visited[neighbor])
            DFS(neighbor);
      }

  }


int main()
{

    F();


    cin>>n>>q;


    for(int u,v,i=0;i<q;i++)
    {
        cin>>u>>v;
        edge[u].push_back(v);
        edge[v].push_back(u);
    }


   for(int i=1;i<=n;i++)
   {
       if(!visited[i])
       {
           result++;
           DFS(i);
       }

   }

   cout<<result;


   //calculate number of components


    return 0;


}
