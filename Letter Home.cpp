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
        int n,s,before=0,after=0;
        cin >> n >> s;

        v nums(n);

        for(auto &e : nums)
            cin >> e;

        int temp1,temp2;
        temp1=abs(s-nums[0])+(nums[n-1]-nums[0]);
        temp2=abs(s-nums[n-1])+(nums[n-1]-nums[0]);

        cout << min(temp1,temp2) << en;
    }
    return  0;
}
