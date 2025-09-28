#include <iostream>
#include <vector>
using namespace std;
int main()
{
	long long m;
	int n,counter=0;
	cin >> n >> m;
	while (n--)
	{
		long long d;
		char c;
		cin >> c >> d;
		switch (c)
		{
		case '+':
		m += d; break;
		case '-':
			if (m >= d) m -= d;
			else counter++;
		}
	}
	cout << m << " " << counter << endl;
	return 0;
}