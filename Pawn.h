#pragma once
#include "Piece.h"
class Pawn :
    public Piece
{
protected:

private:
    bool FirstTurn = true;
public:
    Pawn(Position m_P, COLOR C, Board* D);
    void ChangePosition(int r1, int c2);
    bool IsLegalMove(Board* B, Position S, Position D);
    void Draw();
    void SetTurnTrue();
    bool GetFirstTurn();

    ~Pawn();


};

