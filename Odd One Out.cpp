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
        if(a==b)
        cout << c << endl;
        else if(a==c)
        cout << b << endl;
        else
        cout << a << endl;
    }
    return 0;
}
