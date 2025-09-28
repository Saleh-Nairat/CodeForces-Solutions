#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,p;
    cin >> n;
    double sum=0;
    for(int i=0;i<n;i++)
    {
        cin >> p;
        sum+=p;
    }
    cout << sum/(n*1.0) << endl;
    return 0;
}