#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 

    tc
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n==5&&find(s.begin(),s.end(),'T')!=s.end()&&find(s.begin(),s.end(),'i')!=s.end()&&find(s.begin(),s.end(),'m')!=s.end()&&find(s.begin(),s.end(),'u')!=s.end()&&find(s.begin(),s.end(),'r')!=s.end())
        yes
        else
        no
    }
    return 0;
}