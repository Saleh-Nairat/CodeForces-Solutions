#include <bits/stdc++.h>
using namespace std;
#define en '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(s[0]=='a' || s[1]=='b' || s[2]=='c')
        cout << "YES\n";
        else
        cout << "NO\n";
    }
    return 0;
}