#include <bits/stdc++.h>
using namespace std;
#define en '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    long long n,m,steps=0,pos=1;
    cin >> n >> m;
    for(long long i=0;i<m;i++)
    {
        long long house;
        cin >> house;
        if(house>pos)
        steps+=house-pos;
        else if(house==pos)
        {
            pos=house;
            continue;
        }
        else
        steps+=(n-pos)+house;
        pos=house;
    }
    cout << steps << en;
    return 0;
}