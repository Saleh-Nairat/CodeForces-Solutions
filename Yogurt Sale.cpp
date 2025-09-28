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
         int n,a,b,result=0;
         cin >> n >> a >> b;

         if(b<2*a)
         {
             result+=(n%2==0?b*(n/2):b*(n/2)+a);
         }
         else
         {
             result+=a*n;
         }

         cout << result << en;
     }
     return  0;
}



