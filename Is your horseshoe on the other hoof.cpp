#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    if(a==b&&a==c&&a==d&&b==c&&b==d&&c==d)
    cout << 3 << endl;
    else if(a==b&&a==c || a==c&&a==d ||a==b&&a==d||b==c&&b==d ||a==b&&c==d||a==c&&b==d||a==d&&b==c)
    cout << 2 << endl;
    else if(a==b||a==c||a==d||b==c||b==d||c==d)
    cout << 1 << endl;
    else
    cout << 0 << endl;
    return 0;
}