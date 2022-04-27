#include <iostream>

using namespace std;

void Funkcja(int szukana, int tab[]);

int main()
{
	int szukana;
	int tab[15] = { 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47 };
	int pozycja;

	cout << "Podaj liczbe ktora chcesz znalezc: ";
	cin >> szukana;

	Funkcja(szukana,tab);

}

void Funkcja(int szukana, int tab[])
{
	int l = 0;
	int p = 15;
	int sr = (l + p) / 2;

	while (l <= p)
	{
		if (tab[sr] == szukana)
		{
			cout << "liczba " << szukana << " wystepuje w zbiorze w komorce o indeksie " << sr << endl;
			break;
		}
		else if (tab[sr] > szukana)
		{
			p = sr - 1;
		}
		else
		{
			l = sr + 1;
		}

		sr = (l + p) / 2;
	}
}