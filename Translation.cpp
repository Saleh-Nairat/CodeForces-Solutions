#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    cin >> s >> t;
    reverse(s.begin(),s.end());
    if(t==s)
    cout << "YES\n";
    else
    cout << "NO\n";
    return 0;
}