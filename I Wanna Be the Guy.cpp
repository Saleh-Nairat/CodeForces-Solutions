#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,p,q;
    cin >> n;
    vector<bool> can(n+1);
    for(int i=0;i<n+1;i++)
    can[i]=false;
    cin >> p;
    for(int i=1;i<=p;i++)
    {
        int x;
        cin >> x;
        can[x]=true;
    }
    cin >> q;
    for(int i=1;i<=q;i++)
    {
        int y;
        cin >> y;
        can[y]=true;
    }
    for(int i=1;i<=n;i++)
    {
        if(can[i]==false)
        {
            cout << "Oh, my keyboard!\n";
            return 0;
        }
    }
    cout << "I become the guy.\n";
    return 0;
}