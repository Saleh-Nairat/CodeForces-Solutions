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




     int n;
     cin >> n;
     
     if(n%2)
     {
         cout << 9 << " " << n-9 << en;
     }
     
     else
     {
         cout << 4 << " " << n-4 << en;
     }

     return  0;
}



