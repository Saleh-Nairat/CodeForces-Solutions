#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int Size,Steps=0;
    cin >> Size;
    string Stones;
    cin >> Stones;
    for(int i=0;i<Size-1;i++)
    {
        if(Stones[i]==Stones[i+1])
        Steps++;
    }
    cout << Steps << endl;
}