#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,k;
    cin >> n >> k;
    for(int i=1;i<=k;i++)
    {
        int digit=n%10;
        if(digit==0)
        n/=10;
        else
        n--;
    }
    cout << n << endl;
    return 0;
}