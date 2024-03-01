#pragma once
#include "Piece.h"
class Queen :
    public Piece
{
protected:
public:
    Queen(Position m_P, COLOR m_C, Board* D);
    bool IsLegalMove(Board* B, Position S, Position D);
    void Draw();


    ~Queen();
};

