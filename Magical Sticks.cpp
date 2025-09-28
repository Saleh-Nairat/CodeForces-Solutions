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
     ll n;
     cin >> n;

     if(n%2)
     {
         cout << (n-1)/2+1 << en;
     }
     else
     {
         cout << n/2 << en;
     }
     }
     return  0;
}



