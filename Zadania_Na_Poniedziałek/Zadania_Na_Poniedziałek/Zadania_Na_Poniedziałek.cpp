// Zadania_Na_Poniedziałek.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>
using namespace std;







int main()
{
    //Zadanie 1 //

    string tablica[4] = { "","","","" };
    string tablica1[4];
    cout << "Podaj 4 słowa do wpisania do tablicy:\n";
    for (int i = 0; i < 4; i++)
    {
        cin >> tablica1[i];
    }
    cout << "\nSlowa w Tablicy to: \n";
    for (int i = 0; i < 4; i++)
    {
        cout << tablica1[i] << " ";
    }
    //Zadanie 2 //

    bool b1, b2;
    int i1, i2;
    float f1, f2;
    char c1, c2;
    cout << "\nZadanie 2\n";
    cout << "Podaj dwie wartosci lobiczne 0 albo 1 dla typu bool: \n";
    cin >> b1 >> b2;
    cout << "Podaj dwie liczby całkowite dla typu int: ";
    cin >> i1 >> i2;
    cout << "Podaj dwie liczby zmiennoprzecinkowe dla typu float: ";
    cin >> f1 >> f2;
    cout << "Podaj dwa znaki dla typu char: ";
    cin >> c1 >> c2;


    cout << "\nWczytane zmienne:\n";
    bool wynikOR = b1 || b2;
    cout << "\nWynik operacji OR na zmiennych bool: " << wynikOR << "\n";


    int wynikModulo = i1 % i2;
    cout << "Wynik dzielenia modulo pierwszej liczby przez druga: " << wynikModulo << "\n";


    string tekstZCharow = string(1, c1) + "," + string(1, c2);
    cout << "Zmienna string ze znaków rozdzielonych przecinkiem: " << tekstZCharow << "\n";


    //Zadanie 3 //
    int liczba_Case;
    cout << "\nZadanie 3\n";
    cout << "Podaj dowolna liczebe calkowita: \n";
    cin >> liczba_Case;
    switch (liczba_Case) {
    case 1:
        cout << "jeden\n";
        break;
    case 2:
        cout << "dwa\n";
        break;
    case 3:
        cout << "trzy\n";
        break;
    default:
        cout << "Inna liczba\n";
        break;
    }


    //Zadanie 4///

    int tablica_1[6] = { 10,20,30,40,50,60 };
    int tavlica_2[6];
    cout << "\nZadanie 4\n";
    cout << "Podaj liczby do wpisania do tablicy\n";
    for (int i = 0; i <6; i++)
    {
        cin >> tavlica_2[i];
    }
    cout << "Tablica po wczytaniu: ";
    for (int i = 0; i < 6; i++)
    {
        cout << tavlica_2[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < 6; i++)
    {
        if (i != 3) {
            tavlica_2[i] = 0;
        }
    }
    cout << "Tablica po wyzerowaniu indeksu";
    for (int i = 0; i < 6; i++)
    {
        cout << tavlica_2[i] << " ";
    }


    //Zadanie 5///
    cout << "\nZadanie 5\n";
    float zamiena_wpisana;
    cout << "Podaj liczbe:\n";
    cin >> zamiena_wpisana;
    if (zamiena_wpisana <= -10 || (zamiena_wpisana >= -2 && zamiena_wpisana <= 2) || zamiena_wpisana >= 10)
    {
        cout << "Liczba jest w przedziale";
    }
    else
    {
        cout << "Liczba nie jest w przediale";
    }
    //Zadnie 6///
    cout << "\nZadnie 6\n";
    string a, b;
    cout << "Podaj tekst dla zmienej a:\n";
    cin >> a;
    cout << "Podaj teskt do zmieniej b\n";
    cin >> b;

    if (a.find(b) != string::npos) {
        cout << "Zawiera\n";
    }
    else
    {
        cout << "Nie zawiera\n";
    }
    //Zadnie 7//
    cout << "\n ZADANIE 7 \n";
    int tab1[6];
    int tab2[6];
    int tab3[6];

    cout << "Podaj 6 liczb dla pierwszej tablicy (tab1):\n";
    for (int i = 0; i < 6; i++) {
        cin >> tab1[i];
    }
 
    cout << "Podaj 6 liczb dla drugiej tablicy (tab2):\n";
    for (int i = 0; i < 6; i++) {
        cin >> tab2[i];
    }
  
    for (int i = 0; i < 6; i++) {
        tab3[i] = tab1[i] + tab2[i];
    }

    cout << "Tablica tab3 (suma elementow): ";
    for (int i = 0; i < 6; i++) {
        cout << tab3[i] << " ";
    }
    cout << "\n";
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
