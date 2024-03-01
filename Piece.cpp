#include "Piece.h"
#include<iostream>
using namespace std;

Piece::Piece( Board* BM,Position m_P, COLOR m_C)
{
	B = BM;
	P = m_P;
	C = m_C;
	
}

void Piece::RookCordinate(COLOR c, Position r1, Position r2)
{
	return;
}
char Piece::GetSymbol()
{
	return sym;
}
void Piece::SetSymbol(char a)
{
	sym = a;
}
void Piece::SetColor(COLOR c1)
{
	C = c1;
}
void Piece::SetPosition(Position Post)
{
	P.ri = Post.ri;
	P.ci = Post.ci;

}
void Piece::SetTurnTrue()
{
	return;
}
bool Piece::GetFirstTurn()
{
	return false;
}
void Piece::Draw()
{
	return;
}


void Piece::UnDraw(int r1, int c1)
{
	B->UnDraw(r1, c1);
}
void Piece::ChangePosition(int r1, int c1)
{
	P.ri = r1;
	P.ci = c1;
}

bool Piece::IsHorizontal(Board* B, Position S, Position D)
{
	if (S.ri == D.ri)
	{
		return true;
	}
	return false;
}
bool Piece::IsVertical(Board* B, Position S, Position D)
{
	if (S.ci == D.ci)
	{
		return true;
	}
	return false;
}

bool Piece::IsDiagonal(Board* B, Position S, Position D)
{

	int rDelta = 0;
	int cDelta = 0;
	rDelta = abs(D.ri - S.ri);
	cDelta = abs(D.ci - S.ci);
	if (rDelta == cDelta)
	{
		return true;
	}
	return false;
}
Board* Piece::GetBoard()
{
	return B;
}
bool Piece::IsHorizontalPathClr(Board* B, Position S, Position D)
{
	if (D.ci < S.ci)
	{
		for (int i = S.ci - 1; i > D.ci; i--)
		{

			if (B->GetPiece(S.ri, i) != nullptr)
			{
				return false;
			}


		}
	}
		else if (D.ci > S.ci)
		{
			for (int i = S.ci + 1; i < D.ci; i++)
			{
				if (B->GetPiece(S.ri, i) != nullptr)
				{

					return false;
				}

			}
		}
	
	auto X = B->GetPiece(S.ri, S.ci);
	auto Y = B->GetPiece(D.ri, D.ci);
	if (B->GetPiece(D.ri, D.ci) != nullptr)
	{
		if (X->GetColor() != Y->GetColor())
		{
			return true;
		}
		
	}
	return true;
}

COLOR Piece::GetColor()
{
	if (this != nullptr)
	{
		return C;
	}
}

bool Piece::IsVerticalPathClr(Board* B, Position S, Position D)
{
 if (D.ri < S.ri)
	{
	for (int i = S.ri - 1; i > D.ri; i--)
	{
		if (B->GetPiece(i, S.ci) != nullptr)
		{
			return false;
		}

	}
	}
	else if (D.ri > S.ri)
	{
		for (int i = S.ri + 1; i < D.ri; i++)
		{
			if (B->GetPiece(i, S.ci) != nullptr)
			{
				return false;
			}
		}
	}
	
	auto X = B->GetPiece(S.ri, S.ci);
	auto Y = B->GetPiece(D.ri, D.ci);
	if (B->GetPiece(D.ri, D.ci) != nullptr)
	{
		if (X->GetColor() != Y->GetColor())
		{
			return true;
		}
		
	}
	return true;
}

Position Piece::GetPosition()
{
	return P;
}
bool Piece::IAmKing()
{
	return false;
}

bool Piece::IsDiagonalPathClr(Board* B, Position S, Position D)
{
	
	if (D.ci > S.ci && D.ri < S.ri)
	{
		for (int ri = S.ri - 1, ci = S.ci + 1; ri > D.ri; ri--, ci++)
		{
			if (B->GetPiece(ri, ci) != nullptr)
			{
				if (B->GetPiece(ri, ci) != nullptr)
				{
					return false;
				}
			}

		}
		return true;
	}
	if (D.ri > S.ri && D.ci < S.ci)
	{
		for (int i = S.ri + 1, j = S.ci - 1; i < D.ri; i++, j--)
		{
			if (B->GetPiece(i, j) != nullptr)
			{
				return false;
			}
		}
		return true;
	}
	if (D.ci > S.ci && D.ri > S.ri)
	{
		for (int ri = S.ri + 1, ci = S.ci + 1; ri < D.ri; ri++, ci++)
		{
			if (B->GetPiece(ri, ci) != nullptr)
			{
				return false;
			}
		}
		return true;
	}
	if (D.ci < S.ci && D.ri < S.ri)
	{
		for (int ri = S.ri - 1, ci = S.ci - 1; ri < D.ri; ri--, ci--)
		{
			if (B->GetPiece(ri, ci) != nullptr)
			{
				return false;
			}
		}
		return true;
	}
	if (D.ci < S.ci && D.ri < S.ri)
	{
		for (int i= S.ri - 1, j = S.ci - 1; i > D.ri; i--, j--)
		{
			if (B->GetPiece(i, j) != nullptr)
			{
				return false;
			}
		}
		return true;
	}
	
	auto X = B->GetPiece(S.ri, S.ci);
	auto Y = B->GetPiece(D.ri, D.ci);
	if (B->GetPiece(D.ri, D.ci) != nullptr)
	{
		if (X->GetColor() != Y->GetColor())
		{
			return true;

		}
		else {
			return false;
		}
	}
	
	return false;

}

bool Piece::IsLegalMove(Board* B, Position S, Position D)
{
	return true;
}
Piece::~Piece()
{


}