#include <bits/stdc++.h>
using namespace std;
#define en '\n';
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int k,r,i;
    cin >> k >> r;
    for( i=1;i<=INT_MAX;i++)
    {
        if(k*i%10==0||k*i%10==r)
        break;
    }
    cout << i << endl;
    return 0;
}
