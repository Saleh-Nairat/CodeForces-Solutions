#include <bits/stdc++.h>
using namespace std;
#define en '\n';
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int a,b;
    cin >> a >> b;
    cout << min(a,b) << " ";
    cout << (max(a,b)-min(a,b))/2 << en;
    return 0;
}
