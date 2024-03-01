#pragma once
#include "Header.h"
#include"Board.h"
class Board;
class Piece
{
protected:
	COLOR C;
	Position P;
	Board* B;
	char sym;
public:

	Piece(Board* BM,Position m_P, COLOR m_C);
	virtual void ChangePosition(int r1, int c2); 
	void SetSymbol(char a);
	void SetColor(COLOR s);
	virtual void RookCordinate(COLOR c, Position r1, Position r2);
	void SetPosition(Position s);
	virtual void Draw();
	virtual bool GetFirstTurn();
	virtual void SetTurnTrue();
	Board* GetBoard();
	COLOR GetColor();
	char GetSymbol();
	void UnDraw(int r, int c);
	bool IsHorizontal(Board* B, Position S, Position D);
	bool IsVertical(Board* B, Position S, Position D);
	bool IsDiagonal(Board* B, Position S, Position D);
	bool IsHorizontalPathClr(Board* B, Position S, Position D);
	bool IsVerticalPathClr(Board* B, Position S, Position D);
	virtual bool IAmKing();
	Position GetPosition();
	bool IsDiagonalPathClr(Board* B, Position S, Position D);
	virtual bool IsLegalMove(Board* B, Position S, Position D);
	~Piece();

	

};

