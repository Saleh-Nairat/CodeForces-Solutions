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
 


    int n,result=INT_MAX,first,second;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    for(int i=1;i<n;i++)
    {
        if(abs(nums[i]-nums[i-1])<result)
        {
            result=abs(nums[i]-nums[i-1]);
            first=i;
            second=i+1;
        }
    }
    if(abs(nums[n-1]-nums[0])<result)
    cout << n << " " << 1 << en;
    else
    cout << first << " " << second << en;
    return 0;
}