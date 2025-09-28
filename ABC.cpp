#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
bool ispal(string s)
{
    string temp=s;
    reverse(s.begin(),s.end());
    return temp==s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 



    tc
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        if(n>2)
        no
        else
        {
            if(n==1||(n==2&&!ispal(s)))
            yes
            else
            no
        }
    }
    return 0;
}
