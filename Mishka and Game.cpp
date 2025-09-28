#include <bits/stdc++.h>
using namespace std;
#define en '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int n,ca=0,cb=0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
        int a,b;
        cin >> a >> b;
        if(a>b)
        ca++;
        else if(b>a)
        cb++;
    }
    if(ca>cb)
    cout << "Mishka" << en;
    else if(cb>ca)
    cout << "Chris" << en;
    else
    cout << "Friendship is magic!^^" << en;
    return 0;
}