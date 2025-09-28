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
        
        if(a==b)
        cout << 0 << en;
        
        else if(a%b==0 || b%a==0)
        cout << 1 << en;
        
        else
        cout << 2 << en;
    }


    return  0;
}
