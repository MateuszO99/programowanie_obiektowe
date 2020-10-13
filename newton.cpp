#include <iostream>
{
	if (n or k < 0 or n < k)
	{
		std::invalid_argument;
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
	//tutaj tez cos
}
