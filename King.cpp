#include "King.h"
King::King(Position m_P, COLOR m_Color, Board* D) :Piece(m_P, m_Color, D)
{
	((m_Color == White) ? sym = 'k' : sym = 'K');
}
void King::ChangePosition(int r1, int c1)
{
	FirstTurn = false;
	P.ri = r1;
	P.ci = c1;
	FirstTurn = false;

}
bool King::GetFirstTurn()
{
	return FirstTurn;



}
void King::SetTurnTrue()
{
	FirstTurn = true;
}
bool King::AmKing()
{
	return true;
}
void King::Draw()
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
		gotoRowCol(r + 1, c - 1);
		cout << fill;
		gotoRowCol(r + 1, c + 1);
		cout << fill;
		gotoRowCol(r + 1, c);
		cout << fill;
		gotoRowCol(r + 2, c);
		cout << fill;
		gotoRowCol(r + 3, c - 1);
		cout << fill;
		gotoRowCol(r + 3, c - 2);
		cout << fill;
		gotoRowCol(r + 3, c + 1);
		cout << fill;
		gotoRowCol(r + 3, c + 2);
		cout << fill;
		gotoRowCol(r + 3, c);
		cout << fill;

		gotoRowCol(r + 4, c);
		cout << fill;
		gotoRowCol(r + 4, c + 1);
		cout << fill;
		gotoRowCol(r + 4, c - 1);
		cout << fill;
		gotoRowCol(r + 5, c);
		cout << fill;
		gotoRowCol(r + 5, c + 1);
		cout << fill;
		gotoRowCol(r + 5, c - 1);
		cout << fill;

		gotoRowCol(r + 6, c);
		cout << fill;
		gotoRowCol(r + 6, c + 1);
		cout << fill;
		gotoRowCol(r + 6, c - 1);
		cout << fill;
		gotoRowCol(r + 6, c - 2);
		cout << fill;
		gotoRowCol(r + 6, c + 2);
		cout << fill;
		gotoRowCol(r + 7, c);
		cout << fill;
		gotoRowCol(r + 7, c + 1);
		cout << fill;
		gotoRowCol(r + 7, c - 1);
		cout << fill;
		gotoRowCol(r + 7, c - 2);
		cout << fill;
		gotoRowCol(r + 7, c - 3);
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
		gotoRowCol(r + 1, c - 1);
		cout << fill;
		gotoRowCol(r + 1, c + 1);
		cout << fill;
		gotoRowCol(r + 1, c);
		cout << fill;
		gotoRowCol(r + 2, c);
		cout << fill;
		gotoRowCol(r + 3, c - 1);
		cout << fill;
		gotoRowCol(r + 3, c - 2);
		cout << fill;
		gotoRowCol(r + 3, c + 1);
		cout << fill;
		gotoRowCol(r + 3, c + 2);
		cout << fill;
		gotoRowCol(r + 3, c);
		cout << fill;

		gotoRowCol(r + 4, c);
		cout << fill;
		gotoRowCol(r + 4, c + 1);
		cout << fill;
		gotoRowCol(r + 4, c - 1);
		cout << fill;
		gotoRowCol(r + 5, c);
		cout << fill;
		gotoRowCol(r + 5, c + 1);
		cout << fill;
		gotoRowCol(r + 5, c - 1);
		cout << fill;

		gotoRowCol(r + 6, c);
		cout << fill;
		gotoRowCol(r + 6, c + 1);
		cout << fill;
		gotoRowCol(r + 6, c - 1);
		cout << fill;
		gotoRowCol(r + 6, c - 2);
		cout << fill;
		gotoRowCol(r + 6, c + 2);
		cout << fill;
		gotoRowCol(r + 7, c);
		cout << fill;
		gotoRowCol(r + 7, c + 1);
		cout << fill;
		gotoRowCol(r + 7, c - 1);
		cout << fill;
		gotoRowCol(r + 7, c - 2);
		cout << fill;
		gotoRowCol(r + 7, c - 3);
		cout << fill;
		gotoRowCol(r + 7, c + 2);
		cout << fill;
		gotoRowCol(r + 7, c + 3);
		cout << fill;

	}
}

bool King::IsLegalMove(Board* B, Position S, Position D)
{

	int cDelta = abs(D.ci - S.ci);
	int rDelta = abs(D.ri - S.ri);
	auto T = B->GetPiece(D.ri, D.ci);
	if (rDelta <= 1 && cDelta <= 1)
	{
		if (IsHorizontalPathClr(B, S, D) || IsDiagonalPathClr(B, S, D) || IsVerticalPathClr(B, S, D))
		{
			return true;
			if (T != nullptr)
			{
				if (this->C != T->GetColor())
				{
					return true;
				}
			}
		}
			if (T != nullptr)
			{
				if (this->C != T->GetColor())
				{
					return true;
				}
			}
		
		
	}
	return false;
}
King::~King()
{




}
