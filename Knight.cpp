#include "Knight.h"
Knight::Knight(Position m_P, COLOR m_C, Board* D) :Piece(m_P, m_C, D)
{
	((m_C == White) ? sym = 'h' : sym = 'H');
}

bool Knight::IsLegalMove(Board* B, Position S, Position D)
{

	int rDelta = abs(D.ri - S.ri);
	int cDelta = abs(D.ci - S.ci);
	if (rDelta == 1 && cDelta == 2)
	{
		auto X = B->GetPiece(D.ri, D.ci);
		auto Y = B->GetPiece(S.ri, S.ci);
		if (Y == nullptr)
		{
			return true;
		}
		else
		{
			if (Y != nullptr)
			{
				if (X->GetColor() != Y->GetColor())
				{
					return true;
				}
			}
		}

	}
	else if (cDelta == 1 && rDelta == 2)
	{

		auto F = B->GetPiece(D.ri, D.ci);
		auto G = B->GetPiece(S.ri, S.ci);
		if (F == nullptr)
		{
			return true;
		}
		else
		{
			if (F != nullptr)
			{
				if (G->GetColor() != F->GetColor())
				{
					return true;
				}
			}
		}
	}
	
	return false;
}
void Knight::Draw()
{
	char fill = -37;
	int r, c;
	r = (P.ri * 10) + 1;
	c = (P.ci * 10) + 5;
	if (C == Black)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
		gotoRowCol(r, c);
		cout << fill;
		gotoRowCol(r, c - 1);
		cout << fill;
		gotoRowCol(r, c + 1);
		cout << fill;
		gotoRowCol(r + 1, c);
		cout << fill;
		gotoRowCol(r + 1, c - 1);
		cout << fill;
		gotoRowCol(r + 1, c - 2);
		cout << fill;
		gotoRowCol(r + 1, c + 2);
		cout << fill;
		gotoRowCol(r + 1, c + 1);
		cout << fill;
		gotoRowCol(r + 2, c - 1);
		cout << fill;
		gotoRowCol(r + 2, c - 2);
		cout << fill;
		gotoRowCol(r + 2, c - 3);
		cout << fill;
		gotoRowCol(r + 2, c + 2);
		cout << fill;
		gotoRowCol(r + 2, c + 1);
		cout << fill;
		gotoRowCol(r + 2, c + 3);
		cout << fill;

		gotoRowCol(r + 3, c - 1);
		cout << fill;
		gotoRowCol(r + 3, c - 2);
		cout << fill;
		gotoRowCol(r + 3, c - 3);
		cout << fill;
		gotoRowCol(r + 3, c - 4);
		cout << fill;
		gotoRowCol(r + 3, c + 2);
		cout << fill;
		gotoRowCol(r + 3, c + 3);
		cout << fill;

		gotoRowCol(r + 4, c - 1);
		cout << fill;
		gotoRowCol(r + 4, c - 2);
		cout << fill;
		gotoRowCol(r + 4, c - 3);
		cout << fill;
		gotoRowCol(r + 4, c + 2);
		cout << fill;

		gotoRowCol(r + 5, c - 1);
		cout << fill;
		gotoRowCol(r + 5, c - 2);
		cout << fill;
		gotoRowCol(r + 5, c);
		cout << fill;

		gotoRowCol(r + 6, c - 1);
		cout << fill;
		gotoRowCol(r + 6, c - 2);
		cout << fill;
		gotoRowCol(r + 6, c - 3);
		cout << fill;
		gotoRowCol(r + 6, c);
		cout << fill;
		gotoRowCol(r + 6, c + 1);
		cout << fill;
		gotoRowCol(r + 7, c - 1);
		cout << fill;
		gotoRowCol(r + 7, c - 2);
		cout << fill;
		gotoRowCol(r + 7, c - 3);
		cout << fill;
		gotoRowCol(r + 7, c - 4);
		cout << fill;
		gotoRowCol(r + 7, c);
		cout << fill;
		gotoRowCol(r + 7, c + 1);
		cout << fill;
		gotoRowCol(r + 7, c + 2);
		cout << fill;
		gotoRowCol(r + 7, c + 3);
		cout << fill;

	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		gotoRowCol(r, c);
		cout << fill;
		gotoRowCol(r, c - 1);
		cout << fill;
		gotoRowCol(r, c + 1);
		cout << fill;
		gotoRowCol(r + 1, c);
		cout << fill;
		gotoRowCol(r + 1, c - 1);
		cout << fill;
		gotoRowCol(r + 1, c - 2);
		cout << fill;
		gotoRowCol(r + 1, c + 2);
		cout << fill;
		gotoRowCol(r + 1, c + 1);
		cout << fill;
		gotoRowCol(r + 2, c - 1);
		cout << fill;
		gotoRowCol(r + 2, c - 2);
		cout << fill;
		gotoRowCol(r + 2, c - 3);
		cout << fill;
		gotoRowCol(r + 2, c + 2);
		cout << fill;
		gotoRowCol(r + 2, c + 1);
		cout << fill;
		gotoRowCol(r + 2, c + 3);
		cout << fill;

		gotoRowCol(r + 3, c - 1);
		cout << fill;
		gotoRowCol(r + 3, c - 2);
		cout << fill;
		gotoRowCol(r + 3, c - 3);
		cout << fill;
		gotoRowCol(r + 3, c - 4);
		cout << fill;
		gotoRowCol(r + 3, c + 2);
		cout << fill;
		gotoRowCol(r + 3, c + 3);
		cout << fill;

		gotoRowCol(r + 4, c - 1);
		cout << fill;
		gotoRowCol(r + 4, c - 2);
		cout << fill;
		gotoRowCol(r + 4, c - 3);
		cout << fill;
		gotoRowCol(r + 4, c + 2);
		cout << fill;

		gotoRowCol(r + 5, c - 1);
		cout << fill;
		gotoRowCol(r + 5, c - 2);
		cout << fill;
		gotoRowCol(r + 5, c);
		cout << fill;

		gotoRowCol(r + 6, c - 1);
		cout << fill;
		gotoRowCol(r + 6, c - 2);
		cout << fill;
		gotoRowCol(r + 6, c - 3);
		cout << fill;
		gotoRowCol(r + 6, c);
		cout << fill;
		gotoRowCol(r + 6, c + 1);
		cout << fill;
		gotoRowCol(r + 7, c - 1);
		cout << fill;
		gotoRowCol(r + 7, c - 2);
		cout << fill;
		gotoRowCol(r + 7, c - 3);
		cout << fill;
		gotoRowCol(r + 7, c - 4);
		cout << fill;
		gotoRowCol(r + 7, c);
		cout << fill;
		gotoRowCol(r + 7, c + 1);
		cout << fill;
		gotoRowCol(r + 7, c + 2);
		cout << fill;
		gotoRowCol(r + 7, c + 3);
		cout << fill;
	}


}


Knight::~Knight()
{




}