#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int a=k*l;
    int aa=a/nl;
    int lime=c*d;
    int salt=p/np;
    cout << min(aa,min(lime,salt))/n << endl;
    return 0;
}