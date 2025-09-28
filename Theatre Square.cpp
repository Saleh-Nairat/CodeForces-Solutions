#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    double n,m,a;
    long long c;
    cin >> n >> m >> a;
    c=(ceil(n/a) * ceil(m/a));
    cout << c << endl;
}