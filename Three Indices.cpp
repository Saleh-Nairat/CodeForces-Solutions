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
        bool found=false;
        int n;
        cin >> n;
        vector<int> nums(n);
        for(auto &num : nums)
        cin >> num;
        for(int i=0;i<n-2;i++)
        {
            if(nums[i]<nums[i+1] && nums[i+1]>nums[i+2])
            {
                yes
                cout << i+1 << " " << i+2 << " " << i+3 << en;
                found=true;
                break;
            }
        }
        if(!found)
        no
    }
    return 0;
}
