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
         int temp=n/2-1;

         cout << temp+1 << en;

         while(temp--)
         {
             cout << 2 << " ";
         }

         cout << 3 << en;

     }

     else
     {
         int temp=n/2;

         cout << temp << en;

         while(temp--)
         {
             cout << 2 << " ";
         }
     }

     return  0;
}



