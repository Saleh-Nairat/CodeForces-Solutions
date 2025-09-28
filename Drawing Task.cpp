#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n, m, q;
	cin >> n >> m >> q;
	vector<vector<char>> task(n, vector<char>(m, '.'));
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			task[i][j] = '.';
	while (q--)
	{
		int r1, c1, r2, c2;
		char c;
		cin >> r1 >> c1 >> r2 >> c2 >> c;
		for (int i = min(r1,r2) - 1; i <= max(r2,r1) - 1; i++)
		{
			for (int j = min(c1,c2) - 1; j <= max(c2,c1) - 1; j++)
			{
				task[i][j] = c;
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << task[i][j];
		cout << endl;
	}
	return 0;
}