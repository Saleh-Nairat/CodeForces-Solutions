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
 



    int a,b,n;
    bool ok=true;
    cin >> a >> b >> n;
    while(true)
    {
        if(ok)
        {
            n-=gcd(a,n);
            if(n<0)
            {
                cout << 1 << en;
                break;
            }
            ok=!ok;
        }
        else
        {
            n-=gcd(b,n);
            if(n<0)
            {
                cout << 0 << en;
                break;
            }
            ok=!ok;
        }
    }
    return 0;
}

