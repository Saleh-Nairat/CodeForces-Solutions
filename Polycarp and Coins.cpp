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
        ll n;
        cin >> n;
        ll c1=n/3;
        ll c2=(n-1)/3+1;
        if(c1+(2*c2)==n)
        cout << c1 << " " << c2 << en;
        else
        cout << c2 << " " << c1 << en;
    }
    return 0;
}
