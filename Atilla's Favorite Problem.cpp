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
        int n;
        cin >> n;
        string s;
        cin >> s;
        char mx=s[0];
        for(int i=1;i<n;i++)
        {
            if(s[i]>mx)
            mx=s[i];
        }
        cout << (mx-'a'+1) << en;
    }
    return 0;
}
