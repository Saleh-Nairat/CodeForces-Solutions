#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define v vector<int>
#define vl vector<ll>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    tc
    {
        int n,m,result=0;
        cin >> n >> m;
        map<char,int> mp;
        string s;
        cin >> s;
        string temp="ABCDEFG";
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        for(char c : temp)
        {
            if(mp[c]<m)
            {
                result+=m-mp[c];
            }
        }
        cout << result << en;
    }
    return 0;
}
