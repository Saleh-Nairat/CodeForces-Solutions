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
        cout << (s[0]-'0')+(s[1]-'0') << en;
    }
    return 0;
}
