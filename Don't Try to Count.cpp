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
        bool found=false;
        int n,m,result=0;
        cin >> n >> m;
        string x,s;
        cin >> x >> s;
        while(n<=200)
        {
            if(n<m)
            {
                n+=n;
                x+=x;
                result++;
            }
            for(int i=0;i<x.length();i++)
            {
                if(x.substr(i,m)==s)
                {
                    found=true;
                    break;
                }
            }
            if(found)
            break;
            else
            {
                n+=n;
                result++;
                x+=x;
            }
        }
        if(found)
        cout << result << en;
        else
        cout << -1 << en;
    }
    return 0;
}
