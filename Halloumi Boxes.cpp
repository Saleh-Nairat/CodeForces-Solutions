#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 


    tc
    {
        int n,k;
        cin >> n >> k;
        vector<int> nums(n);
        for(int i=0;i<n;i++)
        cin >> nums[i];
        vector<int> temp=nums;
        sort(temp.begin(),temp.end());
        if(temp==nums)
        yes
        else
        {
            if(k>1)
            yes
            else
            no
        }
    }
    return 0;
}