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




     string s;
     cin >> s;


     for(int i=0;i<s.size();i++)
     {
         int digit=s[i]-'0';
         int temp=9-digit;
         if(temp<digit)
         {
             if(i==0 && temp==0)
             continue;
             else
             s[i]=char(temp+'0');
         }
     }

     cout << s << en;
     return  0;
}



