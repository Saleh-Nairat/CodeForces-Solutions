#include <bits/stdc++.h>
using namespace std;
int main()
{
    string word;
    cin >> word;
    for(int i=0;i<word.length();i++)
    {
        if(word[i]=='Q' || word[i]=='H' || word[i]=='9')
        {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}