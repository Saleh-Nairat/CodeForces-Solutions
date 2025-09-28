#include <bits/stdc++.h>
using namespace std;
#define en '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    int t;
    cin >> t;
    while(t--)
    {
        int n,mx=INT_MIN;
        cin >> n;
        vector<int> nums(n);
        for(int i=0;i<n;i++)
        {
            cin >> nums[i];
            if(nums[i]>mx)
            mx=nums[i];
        }
        vector<int> freq(mx+1);
        for(int i=0;i<n;i++)
        {
            freq[nums[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(freq[nums[i]]==1)
            cout << i+1 << en;
        }
    }
    return 0;
}
