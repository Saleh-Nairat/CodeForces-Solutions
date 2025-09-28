#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
bool isboring(int year,int temp)
{
    while(year)
    {
        int digit=year%10;
        if(digit!=temp)
        return false;
        year/=10;
    }
    return true;
}
int sumdigit(int num)
{
    int sum=0;
    while(num)
    {
        sum++;
        num/=10;
    }
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 

    tc
    {
        int n,k,maximumchain=0,chain=0;
        cin >> n >> k;
        vector<int> nums(n);
        for(int i=0;i<n;i++)
        cin >> nums[i];
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(abs(nums[i]-nums[i+1])<=k)
            {
                chain++;
                maximumchain=max(maximumchain,chain);
            }
            else
            {
                chain=0;
            }
        }
        cout << n-maximumchain-1 << en;
    }
    return 0;
}