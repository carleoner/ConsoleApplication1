// ConsoleApplication1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

// Uruchomienie programu: Ctrl + F5 lub menu Debugowanie > Uruchom bez debugowania
// Debugowanie programu: F5 lub menu Debugowanie > Rozpocznij debugowanie

// Porady dotyczące rozpoczynania pracy:
//   1. Użyj okna Eksploratora rozwiązań, aby dodać pliki i zarządzać nimi
//   2. Użyj okna programu Team Explorer, aby nawiązać połączenie z kontrolą źródła
//   3. Użyj okna Dane wyjściowe, aby sprawdzić dane wyjściowe kompilacji i inne komunikaty
//   4. Użyj okna Lista błędów, aby zobaczyć błędy
//   5. Wybierz pozycję Projekt > Dodaj nowy element, aby utworzyć nowe pliki kodu, lub wybierz pozycję Projekt > Dodaj istniejący element, aby dodać istniejące pliku kodu do projektu
//   6. Aby w przyszłości ponownie otworzyć ten projekt, przejdź do pozycji Plik > Otwórz > Projekt i wybierz plik sln


#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class trojkat {
public:
	int a, b, c;
	string nazwa;
};

int main()
{
    string napis;
    trojkat przyklad;

    fstream plik;
    plik.open("trojkaty2.txt", ios::in);
    if (plik.good() == true)
    {
        while (!plik.eof())
        {
            plik >> przyklad.nazwa >> przyklad.a >> przyklad.b >> przyklad.c;
            cout << "Trojkat: "<< przyklad.nazwa << " Boki: " << przyklad.a << " " << przyklad.b << " " << przyklad.c;
            cout << " Obwod: " << przyklad.a + przyklad.b + przyklad.c << endl;
        }
        plik.close();
    }
    else cout << "Nie udalo otworzyc sie pliku!" << endl;
	return 0;
}