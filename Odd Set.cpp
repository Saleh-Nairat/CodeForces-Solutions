#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;
    while(t--)
    {
        int n,odds=0,evens=0;
        cin >> n;
        for(int i=0;i<n*2;i++)
        {
            int num;
            cin >> num;
            if(num%2)
            odds++;
            else
            evens++;
        }
        cout << (odds==evens?"YES":"NO") << en;
    }
    return 0;
}