#include <iostream>

using namespace std;

int main()
{
	int a = 1;
	int b = 1;
	int nww;

	cout << "podaj a: ";
	cin >> a;
	cout << "podaj b: ";
	cin >> b;

	int iloczyn = a * b;
	
	while (a != b)
	{
		if (a < b)
		{
			b -= a;
		}
		else
		{
			a -= b;
		}

		nww = iloczyn / a;
	}

	cout << "najwieszky wspolny dzielnik to: " << a << endl;
	cout << "najmniejsza wspolna wielokrotnosc to: " << nww << endl;
}