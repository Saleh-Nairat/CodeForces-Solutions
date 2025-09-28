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
 

    tc
    {
        int i;
        string s,result;
        cin >> s;
        for( i=0;i<s.length()-1;i++)
        {
            result+=s[i];
            result+=s[i+1];
            i+=3;
        }
        if(i==s.length())
        result+=s[s.length()-1];
        cout << result << en;
    }
    return 0;
}