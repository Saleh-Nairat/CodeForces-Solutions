#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string Word;
    cin >> Word;
    if(isupper(Word[0]))
    cout << Word << endl;
    else
    {
        Word[0]=toupper(Word[0]);
        cout << Word << endl;
    }
}