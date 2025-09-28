#include <bits/stdc++.h>
using namespace std;
#define en '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int n,sumofx=0,sumofy=0,sumofz=0;
    cin >> n;
    while(n--)
    {
          int x,y,z;
          cin >> x >> y >> z;
          sumofx+=x;
          sumofy+=y;
          sumofz+=z;
    }
    if(sumofx==0&&sumofy==0&&sumofz==0)
    cout << "YES" << en;
    else
    cout << "NO" << en;
    return 0;
}