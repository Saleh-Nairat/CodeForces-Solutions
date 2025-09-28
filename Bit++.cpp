#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases,X=0;
    cin >> testCases;
    while(testCases--)
    {
        string operation;
        cin >> operation;
        if(operation=="++X" || operation=="X++")
        X++;
        else
        X--;
    }
    cout << X << endl;
}