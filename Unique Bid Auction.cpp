#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
bool ispal(string s)
{
    string temp=s;
    reverse(s.begin(),s.end());
    return temp==s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 


    tc
    {
        int n,minimum=INT_MAX,result=-1;
        cin >> n;
        vector<int> nums(n);
        map<int,int> mp;
        for(int i=0;i<n;i++)
        {
            cin >> nums[i];
            mp[nums[i]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp[nums[i]]==1)
            {
                if(nums[i]<minimum)
                {
                    result=i+1;
                    minimum=nums[i];
                }
            }
        }
        cout << result << en;
    }
    return 0;
}
