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
 


    ll a,b,c,case1,case2,case3,case4;
    cin >> a >> b >> c;
    case1=a+c+b;
    case2=a*2+b*2;
    case3=a+c+c+a;
    case4=b+c+c+b;
    cout << min(min(case1,case2),min(case3,case4)) << en;
    return 0;
}