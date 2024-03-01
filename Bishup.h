
#pragma once
#include "Piece.h"
class Bishup :
    public Piece
{
protected:

public:
    Bishup(Position m_P, COLOR m_C, Board* B);
    bool IsLegalMove(Board* B, Position S, Position D);
    void Draw();
    ~Bishup();
};

