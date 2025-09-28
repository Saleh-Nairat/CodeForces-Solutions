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
        int n,k,odds=0;
        cin >> n >> k;
        string s;
        cin >> s;
        map<char,int> mp;
        for(int i=0;i<n;i++)
        mp[s[i]]++;
        for(auto [key,value] : mp)
        {
            if(value%2)
            odds++;
        }
        if(odds==k||k+1==odds)
        yes
        else 
        {
            if(k<odds)
            no
            else
            {
                int remain=k-odds;
                int remain2=k-odds+1;
                if(remain%2==0||remain2%2==0)
                yes
                else
                no
            }
        }
    }
    return 0;
}
