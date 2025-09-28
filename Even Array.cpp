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
        int n,odds=0,evens=0;
        cin >> n;
        vector<int> nums(n);
        for(int i=0;i<n;i++)
        {
            cin >> nums[i];
            if(nums[i]%2&&i%2==0)
            odds++;
            else if(nums[i]%2==0&&i%2)
            evens++;
        }
        if(evens==odds)
        cout << (evens+odds)/2 << en;
        else
        cout << -1 << en;
    }
    return 0;
}