#include <bits/stdc++.h>
using namespace std;
#define en '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        int mx=max(a,max(b,c)),mn=min(a,min(b,c));
        if(a!=mx && a!=mn)
        cout << a << en;
        else if(b!=mx && b!=mn)
        cout << b << en;
        else
        cout << c << en;
    }
    return 0;
}
