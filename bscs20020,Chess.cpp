
// bscs20020,Chess.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include"Board.h"
using namespace std;
int main()
{
	char toContinue;
	string p1, p2;
	cout << "Enter First Player Name: ";
	cin >> p1;
	cout << endl << "Enter Second Player Name: ";
	cin >> p2;
	do {
		Board B(p1, p2);
		B.Play();
		system("cls");
		cout << "Do you want to play again ? ";
		cin >> toContinue;
	} while (toContinue == 'Y' || toContinue == 'y');
}