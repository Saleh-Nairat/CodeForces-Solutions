#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,b,d,temps=0,full=0,counter=0;
    cin >> n >> b >> d;
    while(n--)
    {
        int orange;
        cin >> orange;
        if(orange>b)
        continue;
        else
        full+=orange;
        if(full>d)
        {
            full=0;
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}