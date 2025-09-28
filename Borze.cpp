#include <bits/stdc++.h>
using namespace std;
#define en '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    string s;
    cin >> s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='.')
        cout << 0;
        else if(s[i]=='-'&&s[i+1]=='.')
        {
            cout << 1 ;
            i++;
        }
        else if(s[i]=='-'&&s[i]=='-')
        {
            cout << 2;
            i++;
        }
    }
    return 0;
}
