#include <iostream>
#include <string>
using namespace std;
int main()
{
	string result = "";
	long long n;
	cin >> n;
	if (n >= 0)
		cout << n << endl;
	else if (n >= -10 && n < 0)
		cout << 0 << endl;
	else
	{
		string s = to_string(n);
		int size = s.length();
		if (s[size - 1] > s[size - 2])
			for (int i = 0; i < size - 1; i++)
				result += s[i];
		else
		{
			for (int i = 0; i < s.length(); i++)
			{
				if (i == size - 2)
					continue;
				else
					result += s[i];
			}
		}
		cout << stoll(result) << endl;
	}
	return 0;
}