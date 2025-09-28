#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
bool isPrime(ll num)
{
    if(num==2) return true;
    else if(num<=1||num%2==0)return false;
    for(int i=3;i*i<=num;i+=2)
        if(num%i==0)
        return false;
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
 
    ll n;
    cin >> n;
    if(n%2==0)
        cout << "YES" << en;
    else
    {
        if(n%3==0)
            cout << "YES" << en;
        else
            cout << "NO" << en;
    }
    return 0;
}