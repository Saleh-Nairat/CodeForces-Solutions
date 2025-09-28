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
        ll a,b,c;
        cin >> a >> b >> c;
        ll temp1,temp2;
        temp1=abs(a-1);
        if(c==1)
        temp2=abs(b-c);
        else
        temp2=abs(abs(b-c)+abs(c-1));
        if(temp1==temp2)
        cout << 3 << en;
        else if(temp1<temp2)
        cout << 1 << en;
        else 
        cout << 2 << en;
    }
    return 0;
}
