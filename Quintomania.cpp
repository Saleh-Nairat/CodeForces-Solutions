#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 

    tc
    {
        bool found=true;
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i=0;i<n;i++)
        cin >> nums[i];
        for(int i=1;i<n;i++)
        {
            if(abs(nums[i]-nums[i-1])==5||abs(nums[i]-nums[i-1])==7)
            continue;
            else
            found=false;
        }
        if(found)
        yes
        else
        no
    }
    return 0;
}