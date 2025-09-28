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
        v nums(3);
        cin >> nums[0] >> nums[1] >> nums[2];
        sort(nums.begin(),nums.end());

        cout << nums[2]-nums[0] << en;
    }

    return  0;
}
