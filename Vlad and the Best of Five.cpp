#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 

    tc
    {
        string s;
        cin >> s;
        if(count(s.begin(),s.end(),'A')>count(s.begin(),s.end(),'B'))
        cout << 'A' << en;
        else
        cout << 'B' << en;
    }
    return 0;
}