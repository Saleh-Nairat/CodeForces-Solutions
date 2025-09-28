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
 

    bool found=false;
    int n;
    cin >> n;
    vector<pair<int,int>> vec;
    for(int i=0;i<n;i++)
    {   int a,b;
        cin >> a >> b;
        vec.push_back({a,b});
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<n-1;i++)
    {
        if(vec[i].second>vec[i+1].second)
        {
            found=true;
            break;
        }
    }
    cout << (found?"Happy Alex":"Poor Alex") << en;
    return 0;
}