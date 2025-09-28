#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long 
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define v vector<int>
#define vl vector<ll>
bool ispal(string s)
{
    string temp=s;
    reverse(temp.begin(),temp.end());
    return s==temp;
} 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    

    int n,temp=1,result=0;
    cin >> n;
    v nums(n);
    for(auto &e : nums)
    cin >> e;
    for(int i=0;i<n-1;i++)
    {
        if(nums[i]<nums[i+1])
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