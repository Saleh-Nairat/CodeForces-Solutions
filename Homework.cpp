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
        int n,m,i=0;
        string a,b,c;
        cin >> n >> a >> m >> b >> c;
        for(char l : b)
        {
            string s;
            s+=l;
            if(c[i++]=='V')
            a.insert(0,s);
            else
            a+=l;
        }
        cout << a << en;
    }
    return 0;
}
