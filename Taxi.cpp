#include <bits/stdc++.h>
using namespace std;
#define en '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    int n;
    cin >> n;
    vector<int> nums(n);
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
        mp[nums[i]]++;
    }
    int result=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]==4)
        result++;
        else if(nums[i]==3)
        {
            result++;
            if(mp[1]>0)
            mp[1]--;
        }
    }
    result+=mp[2]/2;
    int rem=mp[2]%2;
    if(rem!=0)
    {
        result++;
        if(mp[1]>1)
        mp[1]-=2;
        else if(mp[1]>0)
        mp[1]--;
    }
    if(mp[1]!=0)
    {
        result+=ceil(mp[1]/(4*1.0));
    }
    cout << result << en;
    return 0;
}
