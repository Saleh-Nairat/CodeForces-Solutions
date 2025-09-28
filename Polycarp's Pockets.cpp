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
 


    int n,result=0;
    cin >> n;
    map<int,int> mp;
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        mp[num]++;
    }
    for(auto [key,value] : mp)
    {
        if(value>result)
        {
            result=value;
        }
    }
    cout << result << en;
    return 0;
}

/*
                another solution

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
 


    int n,result=0,temp=1;
    cin >> n;
    v nums(n);
    for(auto &e : nums)
    cin >> e;
    sort(nums.begin(),nums.end());
    for(int i=0;i<n-1;i++)
    {
        if(nums[i]==nums[i+1])
        {
            temp++;
        }
        else
        {
            temp=1;
        }
        result=max(result,temp);
    }
    if(n==1)
    cout << 1 << en;
    else
    cout << result << en;
    return 0;
}


*/