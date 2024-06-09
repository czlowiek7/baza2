#include <iostream> 
using namespace std;
struct Ksiegarnia
{
	string tytul;
	string autor;
	int rok;
	string wydawnictwo;
	float cena;
};
int wyszukiwanie(int a, Ksiegarnia Ksiazki[7])
{
	if (a == 1)
	{
		int b;
		cout << "Podaj od jakiego roku chcesz zobaczyc ksiazki: ";
		cin >> b;
		cout << "Znalezione ksiazki: " << endl;
		for (int i = 0; i < 7; i++)
		{
			if (Ksiazki[i].rok >= b)
			{
				cout << "Tytul: " << Ksiazki[i].tytul << "     " << "Autor: " << Ksiazki[i].autor << "     " << "Rok wydania: " << Ksiazki[i].rok << "     " << "Wydawnicto: " << Ksiazki[i].wydawnictwo << "     " << "Cena: " << Ksiazki[i].cena << endl;
			}
		}
	}
	if (a == 2)
	{
		float c;
		cout << "Podaj od jakiej ceny chcesz zobaczyc ksiazki: ";
		cin >> c;
		cout << "Znalezione ksiazki: " << endl;
		for (int i = 0; i < 7; i++)
		{
			if (Ksiazki[i].cena >= c)
			{
				cout << "Tytul: " << Ksiazki[i].tytul << "     " << "Autor: " << Ksiazki[i].autor << "     " << "Rok wydania: " << Ksiazki[i].rok << "     " << "Wydawnicto: " << Ksiazki[i].wydawnictwo << "     " << "Cena: " << Ksiazki[i].cena << endl;
			}
		}
	}
	if (a == 3)
	{
		string d;
		cout << "Podaj od jakiego wydawnictwa chcesz zobaczyc ksiazki: ";
		cin >> d;
		cout << "Znalezione ksiazki: " << endl;
		for (int i = 0; i < 7; i++)
		{
			if (Ksiazki[i].wydawnictwo == d)
			{
				cout << "Tytul: " << Ksiazki[i].tytul << "     " << "Autor: " << Ksiazki[i].autor << "     " << "Rok wydania: " << Ksiazki[i].rok << "     " << "Wydawnicto: " << Ksiazki[i].wydawnictwo << "     " << "Cena: " << Ksiazki[i].cena << endl;
			}
		}
	}
	return 0;
}
int main()
{
	int a = 0;
	int b = 0;
	Ksiegarnia Ksiazki[7];
	Ksiegarnia Tytul1
	{
		"Tytul1",
		"autor1",
		1925,
		"Helion1",
		23.54
	};
	Ksiazki[0] = Tytul1;
	Ksiegarnia Tytul2 =
	{
		"Tytul1",
		"autor2",
		1926,
		"Helion2",
		24.54
	};
	Ksiazki[1] = Tytul2;
	Ksiegarnia Tytul3 =
	{
		"Tytul1",
		"autor1",
		1927,
		"Helion3",
		25.54
	};
	Ksiazki[2] = Tytul3;
	Ksiegarnia Tytul4 =
	{
		"Tytul1",
		"autor2",
		1928,
		"Helion1",
		26.54
	};
	Ksiazki[3] = Tytul4;
	Ksiegarnia Tytul5 =
	{
		"Tytul1",
		"autor1",
		1921,
		"Helion2",
		27.54
	};
	Ksiazki[4] = Tytul5;
	Ksiegarnia Tytul6 =
	{
		"Tytul1",
		"autor2",
		1930,
		"Helion3",
		28.54
	};
	Ksiazki[5] = Tytul6;
	Ksiegarnia Tytul7 =
	{
		"Tytul1",
		"autor1",
		1931,
		"Helion1",
		29.54
	};
	Ksiazki[6] = Tytul7;
	cout << "Po jakiej kategorii chcial bys wyszukac ksiazke: " << endl;
	cout << "1. Rok wydania" << endl;
	cout << "2. Cena" << endl;
	cout << "3. Wydawnictwo" << endl;
	cout << "0. Wyjscie" << endl;
	cin >> a;
	int* tryb = &a;
	wyszukiwanie(*tryb, Ksiazki);






}
