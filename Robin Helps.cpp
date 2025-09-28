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
        int n,k,now=0,result=0;
        cin >> n >> k;
        v nums(n);
        for(auto &e : nums)
        cin >> e;
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=k)
            now+=nums[i];
            else if(nums[i]==0&&now!=0)
            {
                now--;
                result++;
            }
        }
        cout << result << en;
    }
    return 0;
}

