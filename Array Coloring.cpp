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
         int n,sum=0;
         cin >> n;

         v nums(n);

         for(auto &e : nums)
         {
             cin >> e;
             sum+=e;
         }

         cout << (sum%2?"NO":"YES") << en;
     }

     return  0;
}



