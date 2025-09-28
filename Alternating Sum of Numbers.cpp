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
        int n,result=0;
        cin >> n;
        v nums(n);
        for(auto &e : nums)
        cin >> e;
        for(int i=0;i<n-1;i+=2)
        {
            result+=nums[i]-nums[i+1];
        }
        result+=(n%2?nums[n-1]:0);
        cout << result << en;
    }
    return 0;
}