#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define v vector<int>
#define vl vector<ll>

int Binary_Search(vector<int> nums,int target)
{
    int left=0,right=nums.size()-1,result=-1;

    while(left<=right)
    {
        int mid=left + (right-left) / 2;

        if(nums[mid]<=target)
        {
            result=mid+1;
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    tc
    {
        int n,result=0;
        cin >> n;

        v nums(n);
        map<int,int> mp;

        for(auto &e : nums)
        {
            cin >> e;
            mp[e]++;
        }

        result+=mp[0];

        if(mp[-1]%2) {result+=2;}

        if(n==1 && nums[0]==0){cout << 1 << en;}
        else if(n==1 && nums[0]==1) {cout << 0 << en;}
        else if(n==1 && nums[0]==-1) {cout << 2 << en;}
        else{cout << result << en;}
    }
    return  0;
}