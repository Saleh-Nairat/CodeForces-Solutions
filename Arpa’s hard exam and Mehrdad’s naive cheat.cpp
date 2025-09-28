#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    if(n==0)
    {
        cout << 1 << endl;
        return 0;
    }
    int array[4]={8,4,2,6};
    cout << array[(n-1)%4] << endl;
    return 0;
}