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
        int n;
        cin >> n;

        v nums(n);

        for(auto &e : nums)
            cin >> e;

        while(true)
        {
            bool found=false;
            for(int i=1;i<n-1;i++)
            {
                if(nums[i]>nums[i-1] && nums[i]>nums[i+1])
                {
                    swap(nums[i],nums[i+1]);
                    found=true;
                }
            }
            v temp=nums;
            sort(temp.begin(),temp.end());
            if(temp==nums)
            {
                yes
                break;
            }
            else
            {
                if(found)
                continue;
                else
                {
                    no
                    break;
                }
            }
        }
    }

    return  0;
}
