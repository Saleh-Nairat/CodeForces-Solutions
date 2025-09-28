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
         string s;
         cin >> s;

         string result;

         for(int i=0;i<s.size()-2;i++)
         {
             result+=s[i];
         }
         result+='i';
         cout << result << en;
     }
     return  0;
}



