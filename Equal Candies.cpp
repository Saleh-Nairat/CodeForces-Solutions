#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc ll t;cin>>t;while(t--)
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
        ll result=0;
        int n;
        cin >> n;
        v nums(n);
        for(int i=0;i<n;i++)
        {
            cin >> nums[i];
        }
        int value=*min_element(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            result+=nums[i]-value;
        }
        cout << result << en;
    }
    return 0;
    }

