#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 

    tc
    {
        string s;
        cin >> s;
        for(int i=97;i<=104;i++)
        {
            if(char(i)!=s[0])
            cout << char(i) << (s[1]-'0') << en;
        }
        for(int i=1;i<=8;i++)
        {
            if(i!=(s[1]-'0'))
            cout << s[0] << i << en;
        }
    }
    return 0;
}