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



     tc
     {
         bool found=true;
         int n;
         cin >> n;

         v nums(n);

         unordered_set<int> st;

         for(int i=0;i<n;i++)
         {
             cin >> nums[i];
             st.insert(nums[i]);

             if(i!=0)
             {
                 if(!st.count(nums[i]+1) && !st.count(nums[i]-1))
                 {
                     found=false;
                 }
             }
         }
         if(found)
         yes
         else
         no
     }
     return  0;
}



