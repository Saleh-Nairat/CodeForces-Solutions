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



     bool ok=true;
     int n;
     cin >> n;
     v nums(n);

     for(auto &e : nums)
        cin >> e;

     sort(nums.begin(),nums.end());

     if(n%2)
     cout << nums[n/2] << en;
     else
     cout << nums[n/2-1] << en;
     return  0;
}



