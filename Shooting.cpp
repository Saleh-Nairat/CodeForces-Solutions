#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long 
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define v vector<int>
#define vl vector<ll> 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
     
    int n;
    ll result=1;
    cin >> n;
    vector<pair<int,int>> nums;
    for(int i=0;i<n;i++)
    {
        int e;
        cin >> e;
        pair<int,int> p(e,i+1);
        nums.push_back(p);
    }
    sort(nums.rbegin(),nums.rend());
    for(int i=1;i<nums.size();i++)
    {
        result+=nums[i].first*i+1;
    }
    cout << result << en;
    for(auto a : nums)
    cout << a.second << " ";
    cout << en;
    return 0;
}