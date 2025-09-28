#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int counterlower=0,counterupper=0;
    string word;
    cin >> word;
    for(int i=0;i<word.length();i++)
    {
        if(isupper(word[i]))
        counterupper++;
        else
        counterlower++;
    }
    if(counterupper>counterlower)
    {
        for(int i=0;i<word.length();i++)
        {
            word[i]=toupper(word[i]);
        }
    }
    else
    {
        for(int i=0;i<word.length();i++)
        {
            word[i]=tolower(word[i]);
        }
    }
    cout << word << endl;
}