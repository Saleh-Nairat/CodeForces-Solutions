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



    int a,b,have,r,result=0;
    cin >> a >> b;


    have=a;
    r=have/b;
    while(have>=b)
    {
        result+=r;
        have=r+(have%b);
        r=have/b;
    }
    result+=a;
    cout << result << en;
    return 0;
}
