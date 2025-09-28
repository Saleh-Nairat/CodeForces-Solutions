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
        bool found=false;
        long long n;
        cin >> n;
        if(n%2&&n!=1)
        cout << "YES\n";
        else
        {
            while(n)
            {
                int num=n/2;
                if(num%2&&num!=1)
                {
                    found=true;
                    break;
                }
                n/=2;
            }
            if(found)
            cout << "YES\n";
            else
            cout << "NO\n";
        }
    }
    return 0;
}
