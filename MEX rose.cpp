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
        int n,k,missing=0,result=0;
        cin >> n >> k;

        map<int,int> mp;

        for(int i=0;i<n;i++)
        {
            int num;
            cin >> num;
            mp[num]++;
        }

        for(int i=0;i<k;i++)
        {
            if(!mp[i]){missing++;}
        }

        result=missing + mp[k];
        result-=min(missing,mp[k]);

        cout << result << en;

    }
    return  0;
}