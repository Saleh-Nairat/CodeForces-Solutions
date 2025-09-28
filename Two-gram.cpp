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
 


    int n,maximum;
    cin >> n;
    string s;
    cin >> s;
    pair<char,char> result;
    vector<pair<char,char>> cc;
    map<pair<char,char>,int> mp;
    for(int i=0;i<n-1;i++)
    {
        pair<char,char> p(s[i],s[i+1]);
        cc.push_back(p);
        mp[cc[i]]++;
        if(i==0)
        {
        maximum=mp[cc[i]];
        result=p;
        }
    }
    for(auto [key,value] : mp)
    {
        if(value>maximum)
        {
        result=key;
        maximum=value;
        }
    }
    cout << result.first << result.second << en;
    return 0;
}