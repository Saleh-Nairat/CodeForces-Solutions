#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s,t;
    cin >> s >> t;
    for(int i=0;i<s.length();i++)
    {
        s[i]=tolower(s[i]);
        t[i]=tolower(t[i]);
        if(s[i]<t[i])
        {
            cout << -1 << endl;
            return 0;
        }
        else if(t[i]<s[i])
        {
            cout << 1 << endl;
            return 0;
        }
    }
    cout << 0 << endl;
}