#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int freindHouse;
    cin >> freindHouse;
    if(freindHouse<=5)
    cout << 1 << endl;
    else
    {
        cout << ceil((double)freindHouse/5) << endl;
    }
    return 0;
}