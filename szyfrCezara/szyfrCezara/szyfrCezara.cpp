#include <iostream>

using namespace std;

void Funkcja(int klucz, char tab[]);

int main()
{
	int klucz;
	char tab[100];

	cout << "Podaj wyraz skladajacy sie z malych liter: ";
	cin >> tab;
	cout << "Podaj klucz z przedzialu [-26,26]: ";
	cin >> klucz;

	Funkcja(klucz, tab);
	cout << endl;
}

void Funkcja(int klucz, char tab[])
{
	int dl = strlen(tab);

	if (!(klucz >= -26 && klucz <= 26))
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
					tab[i] += klucz;
				}
				else
				{
					tab[i] = tab[i] + klucz - 26;
				}
			}
			cout << "Po zaszyfrowaniu: " << tab;
		}
		else
		{
			for (int i = 0; i < dl; i++)
			{
				if (tab[i] + klucz >= 'a')
				{
					tab[i] += klucz;
				}
				else
				{
					tab[i] = tab[i] + klucz + 26;
				}
			}
			cout << "Po zaszyfrowaniu: " << tab;
		}
	}
}