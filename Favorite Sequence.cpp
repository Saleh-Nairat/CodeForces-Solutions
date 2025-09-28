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
        int n;
        cin >> n;
        v nums(n),result;
        for(int i=0;i<n;i++)
        {
            cin >> nums[i];
        }
        for(int i=0,j=n-1;j>=i;i++,j--)
        {
            result.push_back(nums[i]);
            result.push_back(nums[j]);
        }
        if(n%2)
        result.pop_back();
        for(auto &value : result)
        cout << value << " ";
        cout << en;
    }
    return 0;
    }

