#include <iostream>

using namespace std;

int main()
{
	int n = 1;
	int lp = 0;
	int p = 2;
	bool pierwsza;

	cout << "Ile liczb pierwszych chcesz wyswietlic? ";
	cin >> n;

	while (lp < n)
	{
		pierwsza = true;
		for (int d = 2; d < p - 1; d++)
		{
			p% d;
			if (p % d == 0)
			{
				pierwsza = false;
			}
		}

		if (pierwsza == true)
		{
			cout << p << " ";
		}

		lp += 1;
		p += 1;
	}
}