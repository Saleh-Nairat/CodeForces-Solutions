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
        int a,b;
        cin >> a >> b;
        if(a==0)
        {
            if(b%2==0)
            yes
            else
            no
        }
        else if(b==0)
        {
            if(a%2==0)
            yes
            else
            no
        }
        else if(a%2==0&&b%2==0)
        yes
        else if(a%2==0&b%2)
        yes
        else
        no
    }
    return 0;
}

