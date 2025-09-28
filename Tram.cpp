#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,rem=0,maximum=INT_MIN;
    cin >> n;
    while(n--)
    {
        int a,b;
        cin >> a >> b;
        rem-=a;
        rem+=b;
        if(rem>maximum)
        maximum=rem;
    }
    cout << maximum << endl;
    return 0;
}