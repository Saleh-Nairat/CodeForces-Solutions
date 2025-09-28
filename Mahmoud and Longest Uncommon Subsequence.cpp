#include <iostream>
using namespace std;
int main()
{
	string a , b;
	cin >> a >> b;
	int size_a = a.length();
	int size_b = b.length();
	if (a == b)
	cout << -1 << endl;
	else
	cout << max(size_a , size_b) << endl;
	return 0;
}
 