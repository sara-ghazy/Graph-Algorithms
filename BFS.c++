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


 int n,m,start,cost[100001]; vector<int>edge[100001];

 void BFS(int start)
 {

     queue<int>q;
     q.push(start);
     cost[start]=0;
     while(!q.empty())
     {
         int node=q.front();
         q.pop();

         for(int child:edge[node])
         {
             if(cost[child]==-1)
             {
                 cost[child]=cost[node]+1;
                 q.push(child);
             }
         }

     }


 }


int main()
{

    F();

    memset(cost,-1,sizeof cost);

    cin>>n>>m>>start;
    for(int x,y;m--;)
    {
        cin>>x>>y;
        edge[x].push_back(y);
        edge[y].push_back(x);
    }

    BFS(start);


     for(int i=1;i<=n;i++)
     cout<<i<<":"<<cost[i]<<endl;



    //shortest path


    return 0;


}
