#include <iostream>

using namespace std;

int main()
{
	int klucz;
	char tab[100];
	int dl = strlen(tab);

	cout << "Podaj wyraz skladajacy sie z malych liter: ";
	cin >> tab;
	cout << "Podaj klucz z przedzialu [-26..26]: ";
	cin >> klucz;

	if (klucz < -26 && klucz > 26)
	{
		//break
	}
	else
	{
		if (klucz >= 0)
		{
			for (int i = 0; i < dl; i++)
			{
				if (tab[i] + klucz <= 'z')
				{
					tab += klucz;
				}
				else
				{
					tab = tab + klucz - 26;
				}
			}
		}
		else
		{
			for (int i = 0; i < dl; i++)
			{
				if (tab[i] + klucz >= 'a')
				{
					tab += klucz;
				}
				else
				{
					tab = tab + klucz + 26;
				}
			}
		}
	}
	//cout << "Po zaszyfrowaniu:" << tab;
	//cout << "Po rozszyfrowaniu: " << tab;
}