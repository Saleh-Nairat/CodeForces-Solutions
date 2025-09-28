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





     int n,m;
     cin >> n >> m;

     v nums(n);
     vector<pair<int,int>> rounds;

     for(auto &e : nums)
     cin >> e;

     for(int i=0;i<n;i++)
     {
        int temp=((nums[i]-1)/m)+1;
        rounds.push_back({temp,i+1});
     }

     sort(rounds.rbegin(),rounds.rend());

     cout << rounds[0].second << en;

     return  0;
}



