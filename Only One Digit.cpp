#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define v vector<int>
#define vl vector<ll> 
int minimumDigit(int x)
{
    int result=x%10;
    x/=10;
    while(x)
    {
        int digit=x%10;
        if(digit<result)
        result=digit;
        x/=10;
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 


    tc
    {
        int x;
        cin >> x;
        cout << minimumDigit(x) << en;
    }
    return 0;
    }

