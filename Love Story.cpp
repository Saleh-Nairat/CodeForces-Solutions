#include <bits/stdc++.h>
using namespace std;
#define en '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    string goal="codeforces";
    int t;
    cin >> t;
    while(t--)
    {
        int counter=0;
        string s;
        cin >> s;
        for(int i=0;i<s.length();++i)
        {
            if(s[i]!=goal[i])
            counter++;
        }
        cout << counter << en;
    }
    return 0;
}