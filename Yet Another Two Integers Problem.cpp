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
        long long a,b;
        cin >> a >> b;
        if(a==b) 
        {
            cout << 0 << en;
        }
        else if(b>a)
        {
            int x=b-a;
            int rem=x%10;
            if(rem==0)
            cout << x/10 << endl;
            else
            cout << (x/10)+1 << endl;
        }
        else 
        {
            int x=a-b;
            int rem=x%10;
            if(rem==0)
            cout << x/10 << endl;
            else 
            cout << (x/10)+1 << endl;
        }
        }
    return 0;
}
