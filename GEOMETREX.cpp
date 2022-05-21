#include <iostream>
#include <windows.h>
#include "GEOMETREX.h"

using namespace std;

int main()
{
	int opt, optPola, optObwody, optObjetosci;
	float pTrojkat, pTrojkat2, obwTrojkat, obwTrojkat2, obwTrojkat3;
	float pKwadrat, obwKwadrat;
	float obwProstakat, obwProstakat2, pProstakat, pProstakat2;
	float pRomb, pRomb2, obwRomb;
	float bTrapez, bTrapez2, bTrapez3, bTrapez4, hTrapez;
	float pRownoBok, pRownoBok2, bRownobok, bRownobok2;
    float objSzescian;
    float objProsto, objProsto2, objProsto3;
	for (; ;) {
		cout << "\nJesli chcesz zakonczyc dzialanie programu mozesz wpisac '0' przy tym pytaniu";
		cout << "\nWybierz opcje: 1. Pola 2. Obwody 3. Objetosci: \n";
		cin >> opt;
		if (opt == 1)
		{
			cout << "Wybrano: Kalkulator pol powierzchni\n";
			cout << "Wybierz figure geometryczna: 1. Kwadrat 2. Prostakat 3. Trojkat 4. Romb 5. Trapez 6. Rownoleglobok: \n";
			cin >> optPola;
			if (optPola == 1)
			{
				cout << "Podaj dlugosc boku A: \n";
				cin >> pKwadrat;
				cout << pKwadrat * pKwadrat;
			}
			else if (optPola == 2)
			{
				cout << "Podaj dlugosc boku A: \n";
				cin >> pProstakat;
				cout << "Podaj dlugosc boku B: \n";
				cin >> pProstakat2;
				cout << pProstakat * pProstakat2;
			}
			else if (optPola == 3)
			{
				cout << "Podaj dlugosc podstawy: \n";
				cin >> pTrojkat;
				cout << "Podaj dlugosc wysokosci: \n";
				cin >> pTrojkat2;
				cout << pTrojkat * pTrojkat2 / 2;
			}
			else if (optPola == 4)
			{
				cout << "Podaj dlugosc podstawy: \n";
				cin >> pRomb;
				cout << "Podaj dlugosc wysokosci: \n";
				cin >> pRomb2;
				cout << pRomb * pRomb2;
			}
			else if (optPola == 5)
			{
				cout << "Podaj dlugosc boku A: \n";
				cin >> bTrapez;
				cout << "Podaj dlugosc boku B: \n";
				cin >> bTrapez2;
				cout << "Podaj dlugosc wysokosci: \n";
				cin >> hTrapez;
				cout << (bTrapez + bTrapez2) * hTrapez / 2;
			}
			else if (optPola == 6)
			{
				cout << "Podaj dlugosc podstawy: \n";
				cin >> pRownoBok;
				cout << "Podaj dlugosc wysokosci: \n";
				cin >> pRownoBok2;
				cout << pRownoBok * pRownoBok2;
			}
		}
		else if (opt == 2)
		{
			cout << "Wybrano: kalkulator obwodow \n";
			cout << "Wybierz figure geometryczna: 1. Kwadrat 2. Prostokat 3. Trojkat. 4. Romb 5. Trapez 6. Rownoleglobok:\n";
			cin >> optObwody;
			if (optObwody == 1)
			{
				cout << "Podaj dlugosc boku A: \n";
				cin >> obwKwadrat;
				cout << obwKwadrat * 4;
			}
			else if (optObwody == 2)
			{
				cout << "Podaj dlugosc boku A: \n";
				cin >> obwProstakat;
				cout << "Podaj dlugosc boku B: \n";
				cin >> obwProstakat2;
				cout << 2 * obwProstakat + 2 * obwProstakat2;
			}
			else if (optObwody == 3)
			{
				cout << "Podaj dlugosc boku A: \n";
				cin >> obwTrojkat;
				cout << "Podaj dlugosc boku B: \n";
				cin >> obwTrojkat2;
				cout << "Podaj dlugosc boku C: \n";
				cin >> obwTrojkat3;
				cout << obwTrojkat + obwTrojkat2 + obwTrojkat3;
			}
			else if (optObwody == 4)
			{
				cout << "Podaj dlugosc boku rombu: \n";
				cin >> obwRomb;
				cout << obwRomb * 4;
			}
			else if (optObwody == 5)
			{
				cout << "Podaj dlugosc pierwszej podstawy: \n";
				cin >> bTrapez;
				cout << "Podaj dlugosc drugiej podstawy: \n";
				cin >> bTrapez2;
				cout << "Podaj dlugosc boku przy podstawie: \n";
				cin >> bTrapez3;
				cout << "Podaj dlugosc drugiego boku przy podstawie: \n";
				cin >> bTrapez4;
				cout << bTrapez + bTrapez2 + bTrapez3 + bTrapez4;
			}
			else if (optObwody == 6)
			{
				cout << "Podaj dlugosc boku A: \n";
				cin >> bRownobok;
				cout << "Podaj dlugosc boku B: \n";
				cin >> bRownobok2;
				cout << bRownobok * 2 + bRownobok2 * 2;
			}
		}
        else if (opt == 3)
        {
            cout << "Wybrano kalkulator objetosci\n";
            cout << "Wybierz figure: 1. Szescian 2. Prostopadloscian\n";
            cin >> optObjetosci;
            if (optObjetosci == 1){
                cout << "Podaj dlugosc krawedzi: \n";
                cin >> objSzescian;
                cout << objSzescian * objSzescian * objSzescian;
            }
            else if (optObjetosci == 2)
            {
                cout << "Podaj dlugosc krawedzi A: \n";
                cin >> objProsto;
                cout << "Podaj dlugosc krawedzi B: \n";
                cin >> objProsto2;
                cout << "Podaj dlugosc krawedzi C: \n";
                cin >> objProsto3;
                cout << objProsto * objProsto2 * objProsto3;
            }
        }
        else if(opt == 0) {
            break;
            exit;
        }
	}
}