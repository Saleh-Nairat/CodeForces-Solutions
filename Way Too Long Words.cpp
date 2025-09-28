#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases;
    cin >> testCases;
    while(testCases--)
    {
        int counter=0;
        string word;
        cin >> word;
        if(word.length()<=10)
        {
            cout << word << endl;
        }
        else
        {
            for(int i=1;i<word.length()-1;i++)
            counter++;
            cout << word[0] << counter << word[word.length()-1] << endl;
        }
    }
}