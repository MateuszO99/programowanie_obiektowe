#include <iostream>
#include <stdexcept>
using namespace std;

static long long sil(int n)
//funkcja obliczajaca silinie n!
{

	long long silnia = 1;
	for (int i = n; i > 1; i--)
	{
		silnia *= i;
	}

	return silnia;
}

long long newton(int n, int k)
//funkcja obliczajaca C(n,k) wykorzystujac funkcje sil()
{
	if (n or k < 0 or n < k)
	{
		throw std::invalid_argument("Bledne dane wejsciowe wymane n>k dla C(n,k) oraz n,k > 0");
	}
	long long nt = sil(n) / (sil(k) * sil(n - k));

	return nt;
}

int main()
{
	cout << sil(5) << endl;
	cout << newton(5, 2) << endl;
	cout << newton(1, 3) << endl;
	cout << newton(5, -2) << endl;
	cout << newton(-5, -2) << endl;
	cout << "TEST SIE POWIODL!" << endl;
	return 0;
}
