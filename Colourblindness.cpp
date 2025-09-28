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
        bool found=true;
        int n;
        cin >> n;
        string a,b;
        cin >> a >> b;
        for(int i=0;i<a.length();i++)
        if(a[i]!='R')
        a[i]='S';
        for(int i=0;i<b.length();i++)
        if(b[i]!='R')
        b[i]='S';
        for(int i=0;i<n;i++)
        if(a[i]!=b[i])
        {
            found=false;
            break;
        }
        if(found)
        yes
        else
        no
    }
    return 0;
}