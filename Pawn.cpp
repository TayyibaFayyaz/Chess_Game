#include "Pawn.h"

Pawn::Pawn(Position m_P, COLOR m_Color, Board* D) :Piece(m_P, m_Color, D)
{
	((m_Color == White) ? sym = 'p' : sym = 'P');
}
bool Pawn::IsLegalMove(Board* B, Position S, Position D)
{
	
	int rDelta = abs(D.ri - S.ri);
	int cDelta = abs(D.ci - S.ci);
	if (this->C == Black && S.ri == 6)
	{
		if (rDelta == 2 && cDelta == 0)
		{
			auto X = B->GetPiece(D.ri, D.ci);
			if (X == nullptr)
			{
				return true;
			}
			else {
				if (this->C != X->GetColor())
				{
					return false;
				}
			}
		}
	}
	if (this->C == White && S.ri == 1)
	{
		if (rDelta == 2 && cDelta == 0)
		{
			auto b = B->GetPiece(D.ri, D.ci);
			if (b == nullptr)
			{
				return true;
			}
			else {
				if (this->C != b->GetColor())
				{
					return false;
				}

			}
		}
	}
	
	if (B->GetPiece(D.ri, D.ci) != nullptr && IsDiagonal(B, S, D))  
	{
		return true; 
	}

	
	if (FirstTurn == true)
	{
		if (IsVerticalPathClr(B, S, D) ) 
		{
			if (rDelta == 2 && cDelta == 0)
			{
				auto R = B->GetPiece(D.ri, D.ci);
				if (R != nullptr)
				{
					return false;
				}
			}
			if (D.ci != S.ci) 
			{
				if (B->GetPiece(D.ri, D.ci) != nullptr)
				{
					auto T= B->GetPiece(D.ri, D.ci);
					if  ( this->GetColor() != T->GetColor() && rDelta == 1 && cDelta == 1)
					{
						return true;
					}
				}
				return false;
			}
			else  
			{
				if (cDelta == 0 && rDelta == 1)
				{
					if (B->GetPiece(D.ri, D.ci) != nullptr)
					{
						return false;
					}

				}

				return true;
			}

		}
	}
	else if (IsVerticalPathClr(B, S, D) ) 
	{
		if (B->GetPiece(D.ri, D.ci) != nullptr && IsDiagonal(B, S, D))
		{
			return true; 
		}
		if (IsVerticalPathClr(B, S, D) && rDelta <= 1 && cDelta <= 1)
		{
			if (D.ci != S.ci)
			{
				return false;
			}
			
		}
	}
	return false;
}

void Pawn::SetTurnTrue()
{
	FirstTurn = true;
}
bool Pawn::GetFirstTurn()
{
	return FirstTurn;
}
void Pawn::ChangePosition(int r, int c)  
{
	P.ri = r;
	P.ci = c;
	FirstTurn = false;
}
void Pawn::Draw()
{
	int r, c;
	r = (P.ri * 10) + 1;
	c = (P.ci * 10) + 5;
	char fill = -37;
	if (C == Black)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);

		gotoRowCol(r, c);
		cout << fill;
		gotoRowCol(r + 1, c);
		cout << fill;
		gotoRowCol(r + 2, c - 2);
		cout << fill;
		gotoRowCol(r + 2, c - 1);
		cout << fill;
		gotoRowCol(r + 2, c);
		cout << fill;
		gotoRowCol(r + 2, c + 1);
		cout << fill;
		gotoRowCol(r + 2, c + 2);
		cout << fill;
		gotoRowCol(r + 3, c - 2);
		cout << fill;
		gotoRowCol(r + 3, c - 1);
		cout << fill;
		gotoRowCol(r + 3, c);
		cout << fill;
		gotoRowCol(r + 3, c + 1);
		cout << fill;
		gotoRowCol(r + 3, c + 2);
		cout << fill;
		gotoRowCol(r + 4, c - 1);
		cout << fill;
		gotoRowCol(r + 4, c);
		cout << fill;
		gotoRowCol(r + 4, c + 1);
		cout << fill;
		gotoRowCol(r + 5, c);
		cout << fill;
		gotoRowCol(r + 6, c + 1);
		cout << fill;
		gotoRowCol(r + 6, c - 1);
		cout << fill;
		gotoRowCol(r + 6, c);
		cout << fill;
		gotoRowCol(r + 7, c - 2);
		cout << fill;
		gotoRowCol(r + 7, c - 1);
		cout << fill;
		gotoRowCol(r + 7, c);
		cout << fill;
		gotoRowCol(r + 7, c + 1);
		cout << fill;
		gotoRowCol(r + 7, c + 2);
		cout << fill;
	}
	else {
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
		gotoRowCol(r, c);
		cout << fill;
		gotoRowCol(r + 1, c);
		cout << fill;
		gotoRowCol(r + 2, c - 2);
		cout << fill;
		gotoRowCol(r + 2, c - 1);
		cout << fill;
		gotoRowCol(r + 2, c);
		cout << fill;
		gotoRowCol(r + 2, c + 1);
		cout << fill;
		gotoRowCol(r + 2, c + 2);
		cout << fill;
		gotoRowCol(r + 3, c - 2);
		cout << fill;
		gotoRowCol(r + 3, c - 1);
		cout << fill;
		gotoRowCol(r + 3, c);
		cout << fill;
		gotoRowCol(r + 3, c + 1);
		cout << fill;
		gotoRowCol(r + 3, c + 2);
		cout << fill;
		gotoRowCol(r + 4, c - 1);
		cout << fill;
		gotoRowCol(r + 4, c);
		cout << fill;
		gotoRowCol(r + 4, c + 1);
		cout << fill;
		gotoRowCol(r + 5, c);
		cout << fill;
		gotoRowCol(r + 6, c + 1);
		cout << fill;
		gotoRowCol(r + 6, c - 1);
		cout << fill;
		gotoRowCol(r + 6, c);
		cout << fill;
		gotoRowCol(r + 7, c - 2);
		cout << fill;
		gotoRowCol(r + 7, c - 1);
		cout << fill;
		gotoRowCol(r + 7, c);
		cout << fill;
		gotoRowCol(r + 7, c + 1);
		cout << fill;
		gotoRowCol(r + 7, c + 2);
		cout << fill;
	}




}

Pawn::~Pawn()
{




}