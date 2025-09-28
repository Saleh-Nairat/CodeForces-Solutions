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
 

    tc
    {
        ll n,k,x;
        cin >> n >> k >> x;
        ll minimum=k*(k+1)/2;
        ll maximum=k*n-(k*(k-1)/2);
        if(x>=minimum&&x<=maximum)
        yes
        else
        no
    }
    return 0;
}