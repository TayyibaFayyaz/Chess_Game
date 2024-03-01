#pragma once
#include "Piece.h"
class Rook :
    public Piece
{
public:
    bool FirstTurn = true;
    bool GetFirstTurn();
    Rook(Position m_P, COLOR m_C, Board* D);
    void Draw();
    void ChangePosition(int r, int c);

    void SetTurnTrue();
    bool IsLegalMove(Board* B, Position S, Position D);
    ~Rook();
};

