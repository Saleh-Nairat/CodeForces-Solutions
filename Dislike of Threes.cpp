#include <bits/stdc++.h>
using namespace std;
#define en '\n'
bool isLucky(int number)
{
    if(number%3==0||number%10==3)
    return false;
    else return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    vector<int> prf;
    for(int i=1,j=0;i<INT_MAX;++i)
    {
        if(isLucky(i))
        prf.push_back(i);
        if(prf.size()==1000)
        break;
    }
    int t;
    cin >> t;
    while(t--)
    {
        int k;
        cin >> k;
        cout << prf[k-1] << en;
    }
    return 0;
}