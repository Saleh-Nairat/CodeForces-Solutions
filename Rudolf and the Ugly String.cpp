#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define v vector<int>
#define vl vector<ll>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



     tc
     {
         int n,result=0;
         string s;
         cin >> n >> s;

         for(int i=0;i<n-2;i++)
         {
             string temp=s.substr(i,3);
             if(i<=n-5)
             {
                 if(s.substr(i,5)=="mapie")
                 {
                     result++;
                     i+=4;
                 }
             }
             if(i<n-2)
             {
             temp=s.substr(i,3);
             if(temp=="map" || temp=="pie")
             result++;
             }
         }
         cout << result << en;
     }
     return  0;
}



