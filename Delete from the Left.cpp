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
 
     
    
    int remove=0;
    string s,t;
    cin >> s >> t;
    int i=s.size()-1,j=t.size()-1;

    while(s[i]==t[j]&&i>=0&&j>=0)
    {
        remove++;
        i--;
        j--;
    }
    cout << s.size()-remove + t.size()-remove << en;
    return 0;
}