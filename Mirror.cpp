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
        string s;
        cin >> s;
        int sum1=(s[0]-'0')+(s[1]-'0')+(s[2]-'0');
        int sum2=(s[3]-'0')+(s[4]-'0')+(s[5]-'0');
        if(sum1==sum2)
            cout << "YES" << en;
        else
            cout << "NO" << en;
    }
    return 0;
}