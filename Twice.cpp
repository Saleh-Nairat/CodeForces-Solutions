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
        vector<int> nums(n);
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin >> nums[i];
            mp[nums[i]]++;
        }
        for(auto [key,value] : mp)
        {
            result+=value/2;
        }
        cout << result << en;
    }
    return 0;
}