#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define tc int t;cin>>t;while(t--)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);




    int t;
    cin >> t;
    while(t--)
    {
        vector<int> nums(3);
        cin >> nums[0] >> nums[1] >> nums[2];
        sort(nums.begin(),nums.end());
        if(nums[2]+nums[1]>=10)
        cout << "YES" << en;
        else
        cout << "NO" << en;
    } 
    return 0;
}
