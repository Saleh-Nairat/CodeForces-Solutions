#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define v vector<int>
#define vl vector<ll>
#define vd vector<double>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);




     tc
     {
         int n,s,m,FirstTime=0,LastTime=0;
         bool can=false;
         cin >> n >> s >> m;

         vector<pair<int,int>> tasks;
         for(int i=1;i<=n;i++)
         {
             int a,b;
             cin >> a >> b;

             tasks.push_back({a,b});
         }

         FirstTime=tasks[0].first;
         LastTime=m-tasks[n-1].second;

         for(int i=1;i<n;i++)
         {
             if((tasks[i].first)-(tasks[i-1].second)>=s)
             {
                 can=true;
                 break;
             }
         }

         cout << (can||FirstTime>=s||LastTime>=s?"YES":"NO") << en;
     }

     return  0;
}



