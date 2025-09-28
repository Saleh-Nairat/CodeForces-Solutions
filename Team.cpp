#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases,counter=0;
    cin >> testCases;
    while(testCases--)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(a&&b || a&&c || b&&c)
        counter++;
    }
    cout << counter << endl;
}