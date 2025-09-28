#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 


    tc
    {
        int n,result=0;
        cin >> n;
        string s;
        cin >> s;
        map<char,int> mp;
        for(int i=0;i<n;i++)
        {
            if(mp[s[i]]>=1)
            {
                result++;
            }
            else
            {
                result+=2;
                mp[s[i]]++;
            }
        }
        cout << result << en;
    }
    return 0;
}