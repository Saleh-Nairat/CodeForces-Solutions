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
 


    int n;
    cin >> n;
    v nums(n),result;
    set<int> used,temp;
    for(auto &e : nums)
    {
        cin >> e;
        temp.insert(e);
    }
    for(int i=n-1;i>=0;i--)
    {
        if(!used.count(nums[i]))
        {
        result.push_back(nums[i]);
        used.insert(nums[i]);
        }
        if(used.size()==temp.size())
        break;
    }
    cout << temp.size() << en;
    reverse(result.begin(),result.end());
    for(auto value : result)
    {
        cout << value << " ";
    }
    cout << en;
    return 0;
}

