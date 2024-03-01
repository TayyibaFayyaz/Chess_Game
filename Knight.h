#pragma once
#include "Piece.h"
class Knight :
    public Piece
{
protected:

public:
   Knight(Position m_P, COLOR m_C, Board* D);
    void Draw();

    bool IsLegalMove(Board* B, Position S, Position D);

    ~Knight();
};



