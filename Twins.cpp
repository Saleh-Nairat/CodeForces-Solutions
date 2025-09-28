#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t,sumOfcoins=0,me=0,counter=0;
    cin >> t;
    vector<int> coins;
    for(int i=0;i<t;i++)
    {
        int a;
        cin >> a;
        sumOfcoins+=a;
        coins.push_back(a);
    }
    sort(coins.begin(),coins.end(),greater<int>());
    for(int i=0;i<t;i++)
    {
        me+=coins.at(i);
        sumOfcoins-=coins.at(i);
        counter++;
        if(me>sumOfcoins)
        break;
    }
    cout << counter << endl;
    return 0;
}