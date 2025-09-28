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



    int k;
    cin >> k;

    string s,result="";
    cin >> s;

    map<char,int> mp;
    vector<string> strings;

    for(auto c : s){mp[c]++;}

    for(auto [key,value] : mp)
    {
        if(value%k!=0){cout << -1;return 0;}
        else
        {
            string temp;
            for(int i=0;i<value/k;i++)
            {
                temp+=key;
            }
            strings.push_back(temp);
        }
    }

    for(int i=0;i<k;i++)
    {
        for(auto s : strings)
        {
            result+=s;
        }
    }

    cout << result << en;
    return  0;
}