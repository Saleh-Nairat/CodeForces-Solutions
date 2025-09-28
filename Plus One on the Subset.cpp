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
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i=0;i<n;i++)
        cin >> nums[i];
        sort(nums.begin(),nums.end());
        cout << abs(nums[n-1]-nums[0]) << en;
    }
    return 0;
}