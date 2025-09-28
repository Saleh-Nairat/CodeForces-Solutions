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
        bool found=false;
        ll n,index=-1,result=0;
        cin >> n;
        v nums(n);
        for(auto &e : nums)
        {
            cin >> e;
        }
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]!=0)
            {
                result+=nums[i];
                found=true;
            }
            else
            {
                if(found)
                result++;
            }
        }
        if(count(nums.begin(),nums.end(),0)-1==n)
        cout << 0 << en;
        else
        cout << result << en;
    }
    return 0;
}