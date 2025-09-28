#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
bool ispal(string s)
{
    string temp=s;
    reverse(s.begin(),s.end());
    return temp==s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 



    tc
    {
        string s1,s2,s3;
        cin >> s1 >> s2 >> s3;
        cout << s1[0] << s2[0] << s3[0] << en;
    }
    return 0;
}
