#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,counter_a=0,counter_d=0;
    cin >> n;
    while(n--)
    {
        char c;
        cin >> c;
        if(c=='A')
        counter_a++;
        else
        counter_d++;
    }
    cout << (counter_a>counter_d?"Anton":counter_d>counter_a?"Danik":"Friendship") << endl;
    return 0;
}