#include <bits/stdc++.h>
using namespace std;
#define en '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    int n,m,a,b;
    cin >> n >> m >> a >> b;
    int first=n*a,second=ceil(n/(m*1.0))*b;
    int third=(n/m)*b+(n%m*a);
    cout << min(first,min(second,third)) << en;
    return 0;
}
