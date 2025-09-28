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
        for(int i=n-1,j=0;i>=j;j++,i--)
        {
            if(s[i]!=s[j])
            n-=2;
            else
            break;
        }
        cout << n << en;
    }
    return 0;
}