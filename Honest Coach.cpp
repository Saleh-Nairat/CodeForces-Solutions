#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define v vector<int>
#define vl vector<ll>
#define vd vector<double>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);




     tc
     {
         int n,result=INT_MAX;
         cin >> n;

         v nums(n);

         for(auto &e : nums)
            cin >> e;

         sort(nums.begin(),nums.end());

         for(int i=0;i<n-1;i++)
         {
             if(abs(nums[i]-nums[i+1])<result)
             result=abs(nums[i]-nums[i+1]);
         }

         cout << result << en;
     }
     return  0;
}



