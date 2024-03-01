#pragma once
#include"Piece.h"
#include<string>
#include<vector>
#include<fstream>
class Piece;
using namespace std;
class Board
{
private:
	
	Piece*** Ps;     
	int Turn;
	int Dim;
	string p1, p2;
public:

	Board(string s, string p);
	void Draw();
	void UnDraw(int r1, int c1);
	void Play();
	void INIT();
	int GetBoardColor(int r1, int c1);
	void PathHighlight(Position S);
	bool STALEMATE();
	void LoadData();
	bool CASTLING(Position S, Position D, Position& K, Position& R1, Position& R2);
	bool CastlingPosible(Position S, Position D, Position& K, Position& R1, Position& R2);
	void Replay(vector<Position>S, vector<Position>D);
	void PositionReplay(Position S, Position D);
	bool CheckMate();
	bool OWNKingCheck();
	bool PieceSaveFromCheck();
	bool TemporaryPositionsChange(Position S, Position D);
    bool SelectedPieceSaveFromCheck(Position S);
	bool SelectedPieceSaveFromCheck(Position S, Position D);
	int GetTurn();
	int GetDim();
	void ChangeTurn();
	void PlayerMove();
	void PosChange(Position S, Position D);
	Piece* GetPiece(int r1, int c1);
	void UnHighlight(Position S);
	bool AnyLegalMove(Position S);
	bool Check();  
	bool SelfCheck(Position S, Position D); 
	bool SelfCheck(Position S);
	Position KingCoordinates(COLOR R);
	static bool CheckInput(int r, int c);
    void SaveData();
	bool GameOver();
	void PromotionOfPawn(Piece *& P);
	void RookCordinate( Position& r1, Position& r2,COLOR c );


};

