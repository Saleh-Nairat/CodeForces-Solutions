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
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i=0;i<n;i++)
        {
            cin >> nums[i];
        }
        while(nums.size()>1)
        {
            int size=nums.size(),temp;
            sort(nums.begin(),nums.end());
            temp=(nums[0]+nums[1])/2;
            nums.erase(nums.begin());
            nums.erase(nums.begin());
            nums.push_back(temp);
        }
        cout << nums[0] << en;
    }
    return 0;
}