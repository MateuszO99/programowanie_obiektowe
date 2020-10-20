#include <iostream>
#include <stdexcept>

#include "newton.h"

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
	if (n < 0 || k < 0 || n < k)
	{
		cout << "Bledne dane wejsciowe wymane n>k dla C(n,k) oraz n,k > 0" << endl;
		throw std::invalid_argument("Bledne dane wejsciowe wymane n>k dla C(n,k) oraz n,k > 0");
	}
	long long nt = sil(n) / (sil(k) * sil(n - k));

	return nt;
}
