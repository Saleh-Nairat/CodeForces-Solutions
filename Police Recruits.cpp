#include <iostream>
using namespace std;
int main()
{
	int n,pc=0,cc=0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int event;
		cin >> event;
		if (event != -1)
			pc += event;
		else
			if (pc == 0)
				cc++;
			else
				pc--;
	}
	cout << cc << endl;
	return 0;
}