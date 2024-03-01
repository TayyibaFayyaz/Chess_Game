#pragma once
#include "Piece.h"
class King :
    public Piece
{
protected:

public:
    bool FirstTurn = true;
    bool GetFirstTurn();
    King(Position m_P, COLOR m_C, Board* D);
    void Draw();
    void ChangePosition(int r, int c);
    bool AmKing();
    bool IsLegalMove(Board* B, Position S, Position D);
    void SetTurnTrue();
    ~King();
};

