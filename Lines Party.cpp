#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int ca=0,cb=0;

    string s;
    cin >> s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a')
            ca++;
        else
            cb++;
    }
    if(ca!=cb)
    {
        cout << "NO" << en;
        return 0;
    }
    for(int i=0;i<s.length()-3;i++)
    {
        if(s[i]=='a'&&s[i+1]=='b'&&s[i+2]=='a'&&s[i+3]=='b')
        {
            cout << "NO" << en;
            return 0;
        }
        else if(s[i]=='b'&&s[i+1]=='a'&&s[i+2]=='b'&&s[i+3]=='a')
        {
            cout << "NO" << en;
            return 0;
        }
    }
    cout << "YES" << en;
    return 0;
}