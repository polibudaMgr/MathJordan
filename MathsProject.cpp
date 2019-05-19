// MathsProject.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <conio.h>
using namespace std;



int main()
{
x:	int matrixSize;
	double c;
	cout << "Prosz\251 poda\206 ilo\230\206 rownan (n) od 1 do 20\n\n";
	//cout << "Proszę podać wielkość tablicy (n) od 1 do 20\n\n";
	cin >> matrixSize;
	system("cls");
	if ((matrixSize <= 20) && (matrixSize >= 1))
	{
		double** tab = new double* [matrixSize];
		double* tab2 = new double[matrixSize];
		for (int i = 0; i < matrixSize; i++)
		{
			tab[i] = new double[matrixSize + 1];

		}

		cout << "Prawid\210owo. Teraz  prosz\251 podawa\206 kolejne elementy rownan:\n\n";

		for (int i = 0; i < matrixSize; i++)
		{
			cout << "\n\n";
			for (int j = 0; j < matrixSize + 1; j++)
			{
				tab[i][j] = 0;
				cout << tab[i][j] << "  ";
			}
		}
		for (int i = 0; i < matrixSize; i++)
		{
			cout << "\n";
			for (int j = 0; j < matrixSize + 1; j++)
			{
				cout << i + 1 << "x" << j + 1 << ":" << endl;
				cin >> tab[i][j];
				system("cls");
				for (int k = 0; k < matrixSize; k++)
				{
					cout << "\n\n";
					for (int l = 0; l < matrixSize + 1; l++)
					{
						cout << tab[k][l] << "  ";
					}
				}
			}
		}
		for (int j = 0; j < matrixSize; j++)
		{
			for (int i = 0; i < matrixSize; i++)
			{
				if (i != j)
				{
					c = tab[i][j] / tab[j][j];
					for (int k = 0; k < matrixSize + 1; k++)
					{
						tab[i][k] = tab[i][k] - c * tab[j][k];
					}
				}
			}
		}
		for (int j = 0; j < matrixSize; j++)
		{
			for (int i = 0; i < matrixSize; i++)
			{
				if (i == j)
				{
					//c = tab[i][j] / tab[j][j];
					//for (int k = 0; k < matrixSize + 1; k++)
					//{
					//	tab[i][k] = tab[i][k] - c * tab[j][k];
					//}

					tab[i][matrixSize + 1 - j] /= tab[i][j];
					tab[i][j] = 1;
				}
			}
		}

		cout << "\n\n" << "nowa macierz:";
		for (int k = 0; k < matrixSize; k++)
		{
			cout << "\n\n";
			for (int l = 0; l < matrixSize + 1; l++)
			{
				cout << tab[k][l] << "  ";
			}
		}
		//printf("\nThe solution is:\n");
		//for (int i = 0; i < matrixSize; i++)
		//{
		//	x[i] = A[i][n + 1] / A[i][i];
		//	printf("\n x%d=%f\n", i, x[i]);
		//}
	}
	else
	{
		cout << "Podano zly zakres\n";
		goto x;
	}
	//_getch();
	return 0;
}

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln
