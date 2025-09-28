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
        int n,d;
        cin >> n;
        v nums(n);


        map<int,int> mp;
        for(auto & e : nums)
        {
            cin >> e;
            mp[e]++;
        }

        d=n-mp.size();

        if(d%2)
        cout << mp.size()-1 << en;
        else
        cout << mp.size() << en;

    }

    return  0;
}
