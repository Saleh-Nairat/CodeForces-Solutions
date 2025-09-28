#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string word,result="";
    cin >> word;
    for(int i=0;i<word.length();i++)
    {
        if(word[i]=='a' || word[i]=='u' || word[i]=='o' || word[i]=='e' || word[i]=='i' || word[i]=='y' || word[i]=='A' || word[i]=='U' || word[i]=='O' || word[i]=='E' || word[i]=='I' || word[i]=='Y')
        continue;
        else
        {
        result+='.';
        if(isupper(word[i]))
        {
        word[i]=tolower(word[i]);
        result+=word[i];
        }
        else
        result+=word[i];
        }
    }
    cout << result << endl;
    return 0;
}