#include "Queen.h"
Queen::Queen(Position m_P, COLOR m_Color, Board* D) :Piece(m_P, m_Color, D)
{
	((m_Color == White) ? sym = 'q' : sym = 'Q');
}

bool Queen::IsLegalMove(Board* B, Position S, Position D)
{
	
	
	if (IsHorizontalPathClr(B, S, D) && IsHorizontal(B, S, D))
	{

		return true;
	}
	if (IsVertical(B, S, D) && IsVerticalPathClr(B, S, D))
	{
		return true;
	}

	if (IsDiagonalPathClr(B, S, D) && IsDiagonal(B, S, D))
	{

		return true;
	}
	return false;

}
void Queen::Draw()
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
		gotoRowCol(r + 1, c - 2);
		cout << fill;
		gotoRowCol(r + 1, c + 2);
		cout << fill;
		gotoRowCol(r + 2, c - 1);
		cout << fill;
		gotoRowCol(r + 2, c + 1);
		cout << fill;
		gotoRowCol(r + 2, c - 1);
		cout << fill;
		gotoRowCol(r + 3, c - 3);
		cout << fill;
		gotoRowCol(r + 3, c + 3);
		cout << fill;
		gotoRowCol(r + 3, c);
		cout << fill;
		gotoRowCol(r + 3, c - 1);
		cout << fill;
		gotoRowCol(r + 3, c + 1);
		cout << fill;
		gotoRowCol(r + 4, c);
		cout << fill;
		gotoRowCol(r + 4, c - 1);
		cout << fill;
		gotoRowCol(r + 4, c + 1);
		cout << fill;
		gotoRowCol(r + 5, c);
		cout << fill;
		gotoRowCol(r + 5, c - 1);
		cout << fill;
		gotoRowCol(r + 5, c + 1);
		cout << fill;
		gotoRowCol(r + 5, c - 2);
		cout << fill;
		gotoRowCol(r + 5, c + 2);
		cout << fill;
		gotoRowCol(r + 6, c);
		cout << fill;
		gotoRowCol(r + 6, c - 1);
		cout << fill;
		gotoRowCol(r + 6, c + 1);
		cout << fill;
		gotoRowCol(r + 6, c - 2);
		cout << fill;
		gotoRowCol(r + 6, c + 2);
		cout << fill;

		gotoRowCol(r + 7, c);
		cout << fill;
		gotoRowCol(r + 7, c - 1);
		cout << fill;
		gotoRowCol(r + 7, c + 1);
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
		gotoRowCol(r + 1, c - 2);
		cout << fill;
		gotoRowCol(r + 1, c + 2);
		cout << fill;
		gotoRowCol(r + 2, c - 1);
		cout << fill;
		gotoRowCol(r + 2, c + 1);
		cout << fill;
		gotoRowCol(r + 2, c - 1);
		cout << fill;
		gotoRowCol(r + 3, c - 3);
		cout << fill;
		gotoRowCol(r + 3, c + 3);
		cout << fill;
		gotoRowCol(r + 3, c);
		cout << fill;
		gotoRowCol(r + 3, c - 1);
		cout << fill;
		gotoRowCol(r + 3, c + 1);
		cout << fill;
		gotoRowCol(r + 4, c);
		cout << fill;
		gotoRowCol(r + 4, c - 1);
		cout << fill;
		gotoRowCol(r + 4, c + 1);
		cout << fill;
		gotoRowCol(r + 5, c);
		cout << fill;
		gotoRowCol(r + 5, c - 1);
		cout << fill;
		gotoRowCol(r + 5, c + 1);
		cout << fill;
		gotoRowCol(r + 5, c - 2);
		cout << fill;
		gotoRowCol(r + 5, c + 2);
		cout << fill;
		gotoRowCol(r + 6, c);
		cout << fill;
		gotoRowCol(r + 6, c - 1);
		cout << fill;
		gotoRowCol(r + 6, c + 1);
		cout << fill;
		gotoRowCol(r + 6, c - 2);
		cout << fill;
		gotoRowCol(r + 6, c + 2);
		cout << fill;

		gotoRowCol(r + 7, c);
		cout << fill;
		gotoRowCol(r + 7, c - 1);
		cout << fill;
		gotoRowCol(r + 7, c + 1);
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
Queen::~Queen()
{



}