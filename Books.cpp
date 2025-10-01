#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define vi vector<int>
#define vl vector<ll>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);




    ll n,t,l=0,time=0,result=0;
    cin >> n >> t;

    vl times(n);

    for(auto &e : times)
    {
        cin >> e;
    }

    for(int i=0;i<n;i++)
    {
        time+=times[i];

        while(time>t)
        {
            time-=times[l++];
        }

        result=max(result,i-l+1);
    }

    cout << result << en;
    return  0;
}
