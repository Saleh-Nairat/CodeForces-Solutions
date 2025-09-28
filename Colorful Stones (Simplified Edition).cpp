#include <iostream>
#include <string>
using namespace std;
int main()
{
	int stone=1,i=0;
	string s,t;
	cin >> s >> t;
	for( int j=0,i=0;j<t.length();j++)
	{
		if(s[i]==t[j])
		{
		stone++;
		i++;
		}
	}
	cout << stone << endl;
}