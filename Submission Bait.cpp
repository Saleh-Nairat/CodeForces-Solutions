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
        bool found=false;
        int n;
        cin >> n;
        v nums(n);
        map<int,int> freq;
        for(auto &e : nums)
        {
            cin >> e;
            freq[e]++;
        }
        for(auto [key,value] : freq)
        {
            if(value%2)
            {
                found=true;
                break;
            }
        }
        if(found)
        yes
        else
        no
    }
    return 0;
}