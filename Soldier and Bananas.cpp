#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k,n,w;
    cin >> k >> n >> w;
    for(int i=1;i<=w;i++)
    {
        n-=i*k;
    }
    if(n>=0)
    cout << 0 << endl;
    else
    cout << abs(n) << endl;
    return 0;
}