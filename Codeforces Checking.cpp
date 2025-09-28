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
        char z;
        cin >> z;
        switch (z)//codeforces
        {
            case 'c':
            case 'o':
            case 'd':
            case 'e':
            case 'f':
            case 'r':
            case 's':
            cout << "YES\n";
            break;
            default:
            cout << "NO\n";
        }
    }
    return 0;
}
