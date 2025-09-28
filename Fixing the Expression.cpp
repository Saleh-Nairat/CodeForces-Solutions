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
        if(s[1]=='>')
        {
            if(s[0]>s[2])
            {
                cout << s << en;
                continue;
            }
            else if(s[0]==s[2])
            {
                cout << s[0] << '=' << s[2] << en;
            }
            else
            cout << s[0] << '<' << s[2] << en;
        }
        else if(s[1]=='<')
        {
            if(s[0]<s[2])
            {
                cout << s << en;
                continue;
            }
            else if(s[0]==s[2])
            {
                cout << s[0] << '=' << s[2] << en;
            }
            else
            cout << s[0] << '>' << s[2] << en;
        }
        else
        {
            if(s[0]==s[2])
            {
                cout << s << en;
            }
            else if(s[0]>s[2])
            {
                cout << s[0] << '>' << s[2] << en;
            }
            else
            {
                cout << s[0] << '<' << s[2] << en;
            }
        }
    }
    return 0;
}

