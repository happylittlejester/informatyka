#include <iostream>

using namespace std;

int main()
{
	int n = 0;
	int lp = 0;
	int p = 2;


	cout << "Ile liczb pierwszych chcesz wyswietlic? ";
	cin >> n;

	while (lp < n)
	{
		for (int d = 2; d < n; d++)
		{
			n% d;
			if (n % d == 0)
			{
				cout << n << "nie jest liczba pierwsza" << endl;
			}
			else
			{
				cout << n << "jest liczba pierwsza" << endl;
			}
		}

		lp += 1;
	}
}