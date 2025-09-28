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
        int size=s.length();
        int sumfirst=(s[0]-'0')+(s[1]-'0')+(s[2]-'0');
        int sumlast=(s[size-1]-'0')+(s[size-2]-'0')+(s[size-3]-'0');
        cout << (sumfirst==sumlast?"YES\n":"NO\n");
    }
    return 0;
}
