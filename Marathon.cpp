#include <bits/stdc++.h>
using namespace std;
#define en '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    int t;
    cin >> t;
    while(t--)
    {
        int a,b,c,d,counter=0;
        cin >> a;
        cin >> b;
        if(b>a)
        counter++;
        cin >> c ;
        if(c>a)
        counter++;
        cin >> d;
        if(d>a)
        counter++;
        cout << counter << en;
    }
    return 0;
}
