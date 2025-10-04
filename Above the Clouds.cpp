#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define vi vector<int>
#define vl vector<ll>
void Saleh()
{
    int n;string s;cin >> n >> s;
    bool found=false;

    map<char,int> mp;

    for(auto c : s) {mp[c]++;}

    for(int i=1;i<n-1;i++)
    {
        if(mp[s[i]]>1) {found=true;break;}
    }

    cout << (found?"YES" : "NO") << en;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);





    tc
    {
        Saleh();
    }

    return  0;
}