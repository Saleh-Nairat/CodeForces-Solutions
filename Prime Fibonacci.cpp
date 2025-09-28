#include <iostream>
bool IsPrime(long long number)
{
	if (number == 2) return true;
	if (number % 2 == 0||number<=1) return false;
	for (long long i = 3; i * i <= number; i += 2)
	{
		if (number % i == 0)
			return false;
	}
	return true;
}
using namespace std;
int main()
{
	long long f[50+1];
	bool primes[50 + 1];
	f[1] = 0;
	f[2] = 1;
	primes[1] = false;
	primes[2] = false;
		for (int i = 3; i <= 50; i++)
		{
			f[i] = f[i - 2] + f[i - 1];
			primes[i] = IsPrime(f[i]);
		}
		int t;
		cin >> t;
		while (t--)
		{
			int N;
			cin >> N;
			cout << (primes[N] ? "prime\n" : "not prime\n");
		}
	return 0;
}