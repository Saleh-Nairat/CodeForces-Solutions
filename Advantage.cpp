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
         int n;
         cin >> n;

         v nums(n);

         for(auto &e : nums)
            cin >> e;

         v temp=nums;

         sort(temp.begin(),temp.end());

         for(int i=0;i<n;i++)
         {
             if(nums[i]!=temp[n-1])
             cout << nums[i]-temp[n-1] << " ";

             else
             cout << nums[i]-temp[n-2] << " ";
         }

         cout << en;
     }

     return  0;
}



