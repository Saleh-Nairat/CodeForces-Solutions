#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long 
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define v vector<int>
#define vl vector<ll> 
int bs(vector<int> &nums,int target)
{
    int l=0,r=nums.size()-1,result=-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(nums[mid]<=target)
        {
            result=mid;
            l=mid+1;
        }
        else
        {
            r=mid-1;
        }
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 


    int n,m;
    cin >> n >> m;
    v nums1(n),nums2(m);

    for(auto &e : nums1)
    cin >> e;
    
    for(auto &e : nums2)
    cin >> e;

    sort(nums1.begin(),nums1.end());

    for(int i=0;i<m;i++)
    {
        cout << bs(nums1,nums2[i])+1 << " ";
    }

    cout << en;
    
    return 0;
}
/*
    another solution

    int n,m;
    cin >> n >> m;
    v nums1(n),nums2(m);
 
    for(auto &e : nums1)
        cin >> e;
 
    for(auto &e : nums2)
        cin >> e;
 
    sort(nums1.begin(),nums1.end());
 
    for(int i=0;i<m;i++)
    {
        cout << upper_bound(nums1.begin(),nums1.end(),nums2[i])-nums1.begin() << " ";
    }
 
    cout << en;
*/