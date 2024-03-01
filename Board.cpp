#include "Board.h"
#include "King.h"
#include "Queen.h"
#include "Rook.h"
#include "Bishup.h"
#include"Pawn.h"
#include"Header.h"
#include<Windows.h>
#include"Knight.h"
#include<iostream>
using namespace std;

Board::Board(string s, string p)
{
	p1 = s;
	p2 = p;
	Dim = 8;
	INIT();
}



void Board::Draw()
{
	char fill = -37;
	int clr = 15;
	for (int i = 0; i < Dim; i++)
	{
		for (int j = 0; j < Dim; j++)
		{
			for (int ri = i * 10; ri < (i * 10) + 10; ri++)
			{
				for (int ci = j * 10; ci < (j * 10) + 10; ci++)
				{
					gotoRowCol(ri, ci);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), clr);
					cout << fill;

				}
				cout << endl;

			}
			clr = ((clr == 15) ? 1 : 15);
		}
		clr = ((clr == 15) ? 1 : 15);
	}

	for (int i = 0, j = 0; i < Dim * 10; i = i + 10, j++)
	{
		for (int k = 0, l = 0; k < Dim * 10; k = k + 10, l++)
		{
			gotoRowCol(i + 1, k + 5);
			if (Ps[j][l] != nullptr)
			{
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
				Ps[j][l]->Draw();
			}
			else {

			}
		}

	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 2);
	for (int i = 80; i < 90; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			gotoRowCol(i, j);
			cout << fill;
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);  //Replay(1)
	gotoRowCol(81, 4);
	cout << fill;
	cout << fill;
	gotoRowCol(82, 4);
	cout << fill;
	cout << fill;
	gotoRowCol(83, 4);
	cout << fill;
	cout << fill;
	gotoRowCol(84, 4);
	cout << fill;
	cout << fill;
	gotoRowCol(85, 4);
	cout << fill;
	cout << fill;
	gotoRowCol(86, 4);
	cout << fill;
	cout << fill;
	gotoRowCol(87, 4);
	cout << fill;
	cout << fill;
	










	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);  //Save
	for (int i = 80; i < 90; i++)
	{
		for (int j = 10; j <20 ; j++)
		{
			gotoRowCol(i, j);
			cout << fill;
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
	gotoRowCol(81, 12);
	cout << fill;
	cout << fill;
	gotoRowCol(82, 12);
	cout << fill;
	cout << fill;
	gotoRowCol(83, 12);
	cout << fill;
	cout << fill;
	gotoRowCol(84, 12);
	cout << fill;
	cout << fill;
	gotoRowCol(85, 12);
	cout << fill;
	cout << fill;
	gotoRowCol(86, 12);
	cout << fill;
	cout << fill;
	gotoRowCol(87, 12);
	cout << fill;
	cout << fill;


	gotoRowCol(81, 16);
	cout << fill;
	cout << fill;
	gotoRowCol(82, 16);
	cout << fill;
	cout << fill;
	gotoRowCol(83, 16);
	cout << fill;
	cout << fill;
	gotoRowCol(84, 16);
	cout << fill;
	cout << fill;
	gotoRowCol(85, 16);
	cout << fill;
	cout << fill;
	gotoRowCol(86, 16);
	cout << fill;
	cout << fill;
	gotoRowCol(87, 16);
	cout << fill;
	cout << fill;

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 5);  //Loaddata
	for (int i = 80; i < 90; i++)
	{
		for (int j = 20; j < 30; j++)
		{
			gotoRowCol(i, j);
			cout << fill;
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	gotoRowCol(81, 21);
	cout << fill;
	cout << fill;
	gotoRowCol(82, 21);
	cout << fill;
	cout << fill;
	gotoRowCol(83, 21);
	cout << fill;
	cout << fill;
	gotoRowCol(84, 21);
	cout << fill;
	cout << fill;
	gotoRowCol(85, 21);
	cout << fill;
	cout << fill;
	gotoRowCol(86, 21);
	cout << fill;
	cout << fill;
	gotoRowCol(87, 21);
	cout << fill;
	cout << fill;


	gotoRowCol(81, 24);
	cout << fill;
	cout << fill;
	gotoRowCol(82, 24);
	cout << fill;
	cout << fill;
	gotoRowCol(83, 24);
	cout << fill;
	cout << fill;
	gotoRowCol(84, 24);
	cout << fill;
	cout << fill;
	gotoRowCol(85, 24);
	cout << fill;
	cout << fill;
	gotoRowCol(86, 24);
	cout << fill;
	cout << fill;
	gotoRowCol(87, 24);
	cout << fill;
	cout << fill;

	gotoRowCol(81, 27);
	cout << fill;
	cout << fill;
	gotoRowCol(82, 27);
	cout << fill;
	cout << fill;
	gotoRowCol(83, 27);
	cout << fill;
	cout << fill;
	gotoRowCol(84, 27);
	cout << fill;
	cout << fill;
	gotoRowCol(85, 27);
	cout << fill;
	cout << fill;
	gotoRowCol(86, 27);
	cout << fill;
	cout << fill;
	gotoRowCol(87, 27);
	cout << fill;
	cout << fill;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);  //Undo
	for (int i = 80; i < 90; i++)
	{
		for (int j = 30; j < 40; j++)
		{
			gotoRowCol(i, j);
			cout << fill;
		}
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	gotoRowCol(81, 31);
	cout << fill;
	
	gotoRowCol(82, 31);
	cout << fill;
	
	gotoRowCol(83, 31);
	cout << fill;
	
	gotoRowCol(84, 31);
	cout << fill;
	
	gotoRowCol(85, 31);
	cout << fill;
	
	gotoRowCol(86, 31);
	cout << fill;
	
	gotoRowCol(87, 31);
	cout << fill;
	


	gotoRowCol(81, 33);
	cout << fill;
	
	gotoRowCol(82, 33);
	cout << fill;
	
	gotoRowCol(83, 33);
	cout << fill;
	
	gotoRowCol(84, 33);
	cout << fill;
	
	gotoRowCol(85, 33);
	cout << fill;
	
	gotoRowCol(86, 33);
	cout << fill;
	
	gotoRowCol(87, 33);
	cout << fill;
	

	gotoRowCol(81, 35);
	cout << fill;
	
	gotoRowCol(82, 35);
	cout << fill;
	
	gotoRowCol(83, 35);
	cout << fill;
	
	gotoRowCol(84, 35);
	cout << fill;
	
	gotoRowCol(85, 35);
	cout << fill;
	
	gotoRowCol(86, 35);
	cout << fill;
	
	gotoRowCol(87, 35);
	cout << fill;
	


	gotoRowCol(81, 37);
	cout << fill;

	gotoRowCol(82, 37);
	cout << fill;
	
	gotoRowCol(83, 37);
	cout << fill;
	
	gotoRowCol(84, 37);
	cout << fill;
	gotoRowCol(85, 37);
	cout << fill;
	gotoRowCol(86, 37);
	cout << fill;
	gotoRowCol(87, 37);
	cout << fill;
	
	

}
void Board::SaveData()
{
	ofstream wrt("Save.txt");
	wrt << Turn<<endl;

	for (int i = 0; i < Dim; i++)
	{
		for (int j = 0; j < Dim; j++)
		{
			if (Ps[i][j] != nullptr)
			{
				wrt << Ps[i][j]->GetSymbol() << " ";
			}
			else
			{
				wrt << '-' << " ";
			}
		}
		wrt << endl;
	}
}
void Board::ChangeTurn()
{
	Turn = (Turn + 1) % 2;        
}
int Board::GetDim()
{
	return Dim;
}
void Board::INIT()
{
	Turn = rand() % 2;
	Ps = new Piece * *[Dim];
	for (int ri = 0; ri < Dim; ri++)
	{
		Ps[ri] = new Piece * [Dim] {};
		for (int ci = 0; ci < Dim; ci++)
		{
			if (ri == 1)
			{
				Ps[ri][ci] = new Pawn(Position{ ri,ci }, White, this);

			}
			 if (ri == 0 &&ci == 0)
				{
					Ps[ri][ci] = new Rook(Position{ ri,ci }, White, this);
				}
				else if (ri == 0 && ci == 1)
				{
					Ps[ri][ci] = new Knight(Position{ ri,ci }, White, this);
				}
				else if (ri == 0 && ci == 2)
				{
					Ps[ri][ci] = new Bishup(Position{ ri,ci }, White, this);
				}
				else if (ri == 0 && ci == 3)
				{
					Ps[ri][ci] = new Queen(Position{ ri,ci }, White, this);
				}
				else if (ri == 0 && ci == 4)
				{
					Ps[ri][ci] = new King(Position{ ri,ci }, White, this);
				}
				else if (ri == 0 && ci == 5)
				{
					Ps[ri][ci] = new Bishup(Position{ ri,ci }, White, this);
				}
				else if (ri == 0 && ci == 6)
				{
					Ps[ri][ci] = new Knight(Position{ ri,ci }, White, this);
				}
				else if (ri == 0 && ci == 7)
				{
					Ps[ri][ci] = new Rook(Position{ ri,ci }, White, this);
				}
		
			if (ri == Dim - 2) 
			{
				Ps[ri][ci] = new Pawn(Position{ ri,ci }, Black, this);
			}
			
			
				if (ri == Dim - 1 && ci == 0)
				{
					Ps[ri][ci] = new Rook(Position{ ri,ci }, Black, this);
				}
				else if (ri == Dim - 1 && ci == 1)
				{
					Ps[ri][ci] = new Knight(Position{ ri,ci }, Black, this);
				}
				else if (ri == Dim - 1 && ci == 2)
				{
					Ps[ri][ci] = new Bishup(Position{ ri,ci }, Black, this);
				}
				else if (ri == Dim - 1 && ci == 3)
				{
					Ps[ri][ci] = new Queen(Position{ ri,ci }, Black, this);
				}
				else if (ri == Dim - 1 && ci == 4)
				{
					Ps[ri][ci] = new King(Position{ ri,ci }, Black, this);
				}
				else if (ri == Dim - 1 && ci == 5)
				{
					Ps[ri][ci] = new Bishup(Position{ ri,ci }, Black, this);
				}
				else if (ri == Dim - 1 && ci == 6)
				{
					Ps[ri][ci] = new Knight(Position{ ri,ci }, Black, this);
				}
				else if (ri == Dim - 1 && ci == 7)
				{
					Ps[ri][ci] = new Rook(Position{ ri,ci }, Black, this);
				}
			}
		}
	}


bool Board::CheckInput(int r, int c)
{
	if (r < 0 || c < 0)
	{
		return false;
	}
	if (r >= 8 || c >= 8)
	{
		return false;
	}
	return true;

}
int Board::GetBoardColor(int r, int c)
{  
	if (r % 2 == 0 && c % 2 == 1)
	{
		return 1;
	}
	else if (r % 2 == 0 && c % 2 == 0)
	{
		return 15;
	}
	else if (r % 2 == 1 && c % 2 == 0)
	{
		return 1;
	}
	else if (r % 2 == 1 && c % 2 == 1)
	{
		return 15;
	}
}

bool Board::AnyLegalMove(Position S)
{
	
	COLOR c;
	for (int i = 0; i < Dim; i++)
	{
		for (int j = 0; j < Dim; j++)
		{
			
			if (Ps[i][j] != nullptr)
			{
				c = Ps[i][j]->GetColor();
				if (Ps[S.ri][S.ci]->IsLegalMove(this, S, { i,j }) && c != Ps[S.ri][S.ci]->GetColor())
				{
					return true;
				}
			}
			else {

				if (Ps[S.ri][S.ci]->IsLegalMove(this, S, { i,j }))
				{
					return true;
				}

			}

		}
	}
	return false;

}
int Board::GetTurn()
{
	return Turn;

}
void Board::UnHighlight(Position S)
{
	
	int clr;
	char fill = -37;
	for (int i = 0; i < Dim; i++)
	{
		for (int j = 0; j < Dim; j++)
		{
		 if (Ps[S.ri][S.ci]->IsLegalMove(this, S, { i,j }))
			{
				clr = GetBoardColor(i, j);
				gotoRowCol((i * 10) + 5, (j * 10) + 5);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), clr);
				cout << fill;
			}
		}
	}

}
void Board::UnDraw(int r1, int c1)
{

	int clr = GetBoardColor(r1, c1);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), clr);
	char f = -37;
	for (int a = 0; a < 10; a++)
	{
		for (int b = 0; b< 10; b++)
		{
			gotoRowCol(r1 * 10 + a, c1 * 10 + b);
			cout << f;
		}
	}
}
void Board::PathHighlight(Position S)
{
	
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	gotoRowCol(S.ri * 10 + 5, S.ci * 10 + 5); 
	char f = -37;
	cout << f;
	for (int i = 0; i < Dim; i++)
	{
	    for (int j = 0; j < Dim; j++)
		{
			
			if (Ps[i][j] == nullptr)
			{
				if (Ps[S.ri][S.ci]->IsLegalMove(this, S, { i,j }))
				{

					gotoRowCol(i * 10 + 5, j * 10 + 5);
					cout << f;
				}

			}
			else    
			{

				if (Ps[S.ri][S.ci]->IsLegalMove(this, S, { i,j }))
				{

					if (Turn == 1)
					{
						if (Ps[i][j]->GetColor() == Black)
						{

							gotoRowCol(i * 10 + 5, j * 10 + 5);
							cout << f;
						}
					}
					else
					{
						if (Ps[i][j]->GetColor() == White)
						{
							gotoRowCol(i * 10 + 5, j * 10 + 5);
							cout << f;
						}
					}
				}

			}
		}
	}
}

bool Board::SelfCheck(Position S, Position D)  
{

	if (Ps[S.ri][S.ci]->GetFirstTurn() == true)
	{
		ChangeTurn();  
		auto R = Ps[S.ri][S.ci];
		auto C = Ps[D.ri][D.ci];
		Ps[D.ri][D.ci] = Ps[S.ri][S.ci];
		Ps[S.ri][S.ci]->ChangePosition(D.ri, D.ci);
		Ps[S.ri][S.ci] = nullptr;
		Position T = R->GetPosition();  
		if (Check())
		{
			Ps[S.ri][S.ci] = R;
			Ps[S.ri][S.ci]->SetTurnTrue();
			Ps[D.ri][D.ci] = C;
			ChangeTurn();
			return true;
		}
		else  
		{
			Ps[S.ri][S.ci] = R;
			Ps[S.ri][S.ci]->SetTurnTrue();
			Ps[D.ri][D.ci] = C;
			ChangeTurn();
			return false;
		}
	}
	else    
	{
		ChangeTurn();
		auto R = Ps[S.ri][S.ci];
		auto C = Ps[D.ri][D.ci];
		Ps[D.ri][D.ci] = Ps[S.ri][S.ci];
		Ps[S.ri][S.ci]->ChangePosition(D.ri, D.ci);
		Ps[S.ri][S.ci] = nullptr;
		Position T = R->GetPosition();
		if (Check())
		{
			Ps[S.ri][S.ci] = R;
			Ps[D.ri][D.ci] = C;

			ChangeTurn();

			return true;
		}
		else
		{
			Ps[S.ri][S.ci] = R;
			Ps[D.ri][D.ci] = C;
			ChangeTurn();
			return false;
		}
	}

}
bool Board::SelfCheck(Position S)//
{
	if (S.ri >= 8 || S.ci >= 8)
	{
		return false;
	}
	for (int i = 0; i < Dim; i++)
	{
		for (int j = 0; j < Dim; j++)
		{
			if (Ps[i][j] != nullptr)
			{
				if (Ps[S.ri][S.ci]->GetColor() != Ps[i][j]->GetColor() && Ps[S.ri][S.ci]->IsLegalMove(this, S, { i,j }) && SelfCheck(S, { i,j }))
				{

					return true;
				}
			}
			else 
			{
				if (Ps[S.ri][S.ci]->IsLegalMove(this, S, { i,j }) && SelfCheck(S, { i,j }))
				{
					return true;
				}


			}
		}
	}
	return false;
}
bool Board::Check()   
{
	Position KC;
	if (Turn == 1)
	{
		KC = KingCoordinates(Black);
		for (int i = 0; i < Dim; i++)
		{
			for (int j = 0; j < Dim; j++)
			{
				if (Ps[i][j] != nullptr && Ps[i][j]->GetColor() == White)
				{
					if (Ps[i][j]->IsLegalMove(this, { i,j }, KC))
					{
						return true;
					}

				}

			}
		}
	}
	else
	{
		KC = KingCoordinates(White);
		for (int i = 0; i < Dim; i++)
		{
			for (int j = 0; j < Dim; j++)
			{
				if (Ps[i][j] != nullptr && Ps[i][j]->GetColor() == Black)
				{
					if (Ps[i][j]->IsLegalMove(this, { i,j }, KC))
					{
						return true;
					}

				}

			}
		}
	}
	return false;
}

Position Board::KingCoordinates(COLOR R)  
{
	Position Temp;
	for (int i = 0; i < Dim; i++)
	{
		for (int j = 0; j < Dim; j++)
		{
			if (Ps[i][j] != nullptr)
			{
				if (Ps[i][j]->IAmKing() && Ps[i][j]->GetColor() == R)
				{
					Temp.ri = i;
					Temp.ci = j;
					return Temp;
				}
			}
		}
	}
}

void Board::PosChange(Position S, Position D)
{
	int x = S.ri, y = S.ci, a = D.ri, b = D.ci;
	UnHighlight(S);
	Ps[a][b] = Ps[x][y];
	Ps[x][y]->ChangePosition(a, b);
	Ps[x][y]->UnDraw(x, y);
	Ps[a][b]->UnDraw(a, b);
	Ps[x][y] = nullptr;
	Ps[a][b]->Draw();

}


bool Board::TemporaryPositionsChange(Position S, Position D)
{

	if (Ps[S.ri][S.ci]->GetFirstTurn() == true)
	{
		auto R = Ps[S.ri][S.ci];
		auto F = Ps[D.ri][D.ri];
		Ps[D.ri][D.ci] = Ps[S.ri][S.ci];
		Ps[S.ri][S.ci]->ChangePosition(D.ri, D.ci);
		Ps[S.ri][S.ci] = nullptr;
		if (!SelfCheck({ D.ri,D.ci }))
		{
			Ps[S.ri][S.ci] = R;
			Ps[S.ri][S.ci]->SetTurnTrue();
			Ps[D.ri][D.ci] = F;
			return true;
		}
	}
	else {
		auto R = Ps[S.ri][S.ci];
		auto F = Ps[D.ri][D.ci];
		Ps[D.ri][D.ci] = Ps[S.ri][S.ci];
		Ps[S.ri][S.ci]->ChangePosition(S.ri, S.ci);
		Ps[S.ri][S.ci] = nullptr;
		if (!SelfCheck({ D.ri,D.ci }))
		{
			Ps[S.ri][S.ci] = R;
			Ps[D.ri][D.ci] = F;
			return true;
		}
	}
	return false;
}

bool Board::OWNKingCheck()
{
	ChangeTurn();
	if (!Check())
	{
		ChangeTurn();
		return false;
	}
	else
	{
		ChangeTurn();
		return true;
	}

}
bool Board::SelectedPieceSaveFromCheck(Position S, Position D)
{
	if (Ps[D.ri][D.ci] == nullptr)
	{
		if (Ps[S.ri][S.ci]->IsLegalMove(this, S, D))
		{
			if (!SelfCheck(S, D))
			{
				return true;
			}
		}
	}
	else if (Ps[D.ri][D.ci] != nullptr)
	{
		if (Ps[S.ri][S.ci]->GetColor() != Ps[D.ri][D.ci]->GetColor())
		{
			if (Ps[S.ri][S.ci]->IsLegalMove(this, S, D))
			{
				if (!SelfCheck(S, D))
				{
					return true;
				}
			}
		}
		else {
			return false;
		}




	}
	return false;
}

bool Board::SelectedPieceSaveFromCheck(Position S)
{

	for (int i = 0; i < Dim; i++)
	{
		for (int j = 0; j < Dim; j++)
		{
			if (Ps[S.ri][S.ci]->IsLegalMove(this, S, { i,j }))
			{
				if (!SelfCheck(S, { i,j }))
				{
					return true;

				}
			}
		}
	}
	return false;
}



bool Board::PieceSaveFromCheck()  
{

	if (Turn == White)
	{
		for (int i = 0; i < Dim; i++)  
		{
			for (int j = 0; j < Dim; j++)
			{
				if (Ps[i][j] != nullptr )
				{
					for (int x = 0; x < Dim; x++)      
					{
						for (int y= 0; y < Dim; y++)
						{
							if (Ps[i][j]->IsLegalMove(this, { i,j }, { y,x }) && !SelfCheck({ i,j }, { y,x }))
							{
								
									return true;
								
							}
						}
					}
				}
			}
		}

	}
	else
	{
		for (int i = 0; i < Dim; i++)
		{
			for (int j = 0; j < Dim; j++)
			{
				if (Ps[i][j] != nullptr)
					if (Ps[i][j]->GetColor() == Black)
					{
						{
							for (int x = 0; x < Dim; x++)
							{
								for (int y = 0; y < Dim; y++)
								{
									if (Ps[i][j]->IsLegalMove(this, { i,j }, { x,y }) && !SelfCheck({ i,j }, { x,y }))
									{
										
											return true;
										
									}
								}
							}
						}
					}
			}

		}
	}
	return false;
}
bool Board::GameOver()
{
	bool flage1 = false;
	bool flage2 = false;
	for (int i = 0; i < Dim; i++)
	{
		for (int j = 0; j < Dim; j++)
		{
			if (Ps[i][j] != nullptr)
			{
				if (Ps[i][j]->GetSymbol() == 'k' && flage1 == false)
				{
					flage1 = true;
				}
				if (Ps[i][j]->GetSymbol() == 'K' && flage2 == false)
				{
					flage2 = true;
				}
			}
		}
	}
	
}
bool Board::CheckMate() 
{
	if (Turn == White)
	{
		if (OWNKingCheck())
		{
			if (!PieceSaveFromCheck())
			{
				return true;
			}
		}
	}
	if (Turn == Black)
	{
		if (OWNKingCheck())
		{
			if (!PieceSaveFromCheck())
			{
				return true;
			}
		}
	}
	return false;
}

void Board::PositionReplay(Position S, Position D) 
{
	int i = S.ri, j = S.ci;
	int x = D.ri, y = D.ci;
	Ps[x][y] = Ps[i][j];
	Ps[i][j]->ChangePosition(x, y);
	Ps[i][j]->UnDraw(i, j);
	Ps[x][y]->UnDraw(x, y);
	Ps[i][j] = nullptr;
	Ps[x][y]->Draw();

}
void Board::LoadData()
{
	ifstream Rdr;
	gotoRowCol(20, 86);
	char x;
	cout << "Do you Want To play previous game  ";
	cin >> x;
	
	if (x == 'y' || x == 'Y')
	{
		Rdr.open("save.txt");
	}
	else {
		Rdr.open("load.txt");
	}
	Rdr >> Turn;
	char a;
	for (int ri = 0; ri < Dim; ri++)
	{
		for (int ci = 0; ci < Dim; ci++)
		{
			Rdr >> a;
			
			if (a == 'P')
			{
				Ps[ri][ci] = new Pawn(Position{ ri,ci }, Black, this);
			}
			else if (a == 'p')
			{
				Ps[ri][ci] = new Pawn(Position{ ri,ci }, White, this);
			}
			else if (a== 'R')
			{
				Ps[ri][ci] = new Rook(Position{ ri,ci }, Black, this);
			}
			else if (a== 'r')
			{
				Ps[ri][ci] = new Rook(Position{ ri,ci }, White, this);
			}
			
			else if (a == 'H')
			{
				Ps[ri][ci] = new Knight(Position{ ri,ci }, Black, this);
			}
			else if (a == 'h')
			{
				Ps[ri][ci] = new Knight(Position{ ri,ci }, White, this);
			}
			else if (a== 'Q')
			{
				Ps[ri][ci] = new Queen(Position{ ri,ci }, Black, this);
			}
			else if (a == 'q')
			{
				Ps[ri][ci] = new Queen(Position{ ri,ci }, White, this);
			}
			else if (a == 'B')
			{
				Ps[ri][ci] = new Bishup(Position{ ri,ci }, Black, this);
			}
			else if (a == 'b')
			{
				Ps[ri][ci] = new Bishup(Position{ ri,ci }, White, this);
			}
			else if (a == 'K')
			{
				Ps[ri][ci] = new King(Position{ ri,ci }, Black, this);
			}
			else if (a == 'k')
			{
				Ps[ri][ci] = new King(Position{ ri,ci }, White, this);
			}
			
			else {
				Ps[ri][ci] = nullptr;
			}
		}
	}
	Draw();

}
	 
bool Board::STALEMATE()
{
	if (Turn == White)
	{
		for (int i = 0; i < Dim; i++)
		{
			for (int j = 0; j < Dim; j++)
			{
				if (Ps[i][j] != nullptr )
				{
					if (AnyLegalMove({ i,j }) && !OWNKingCheck())
					{
						if (!SelfCheck({ i,j }  ) )
						{

							return false;

						}
					}
					

				}
			}
		}

	}
	else
	{
		for (int i = 0; i < Dim; i++)
		{
			for (int j = 0; j < Dim; j++)
			{
				if (Ps[i][j] != nullptr )
				{
					if (AnyLegalMove({ i,j }) && !OWNKingCheck())
					{
						if ( !SelfCheck({ i,j }))
						{
							return false;

						}
					}
					

				}
			}
		}

	}
	return true;
}
void Board::Replay(vector<Position>S, vector<Position> D)
{
	Board* BM = new Board(p1, p2);
	
	
		BM[0].Draw();
		for (int j = 0; j < S.size(); j++)
		{

			BM[0].PositionReplay(S[j], D[j]);
			

		}
	

}
void Board::RookCordinate( Position& r1, Position& r2, COLOR c)
{
	bool flage = false;
	if (c == White)
	{
		for (int i = 0; i < Dim; i++)
		{
			for (int j = 0; j < Dim; j++)
			{
				auto T = Ps[i][j];
				if (T != nullptr)
				{
					if (T->GetSymbol() == 'r')
					{
						if (flage == false)  
						{
							r1.ri = i;
							r1.ci = j;
							flage = true;
						}
						else if (flage == true)
						{
							r2.ri = i;
							r2.ci = j;
						}
					}
				}
			}
		}
	}
	else 
	{
		for (int i = 0; i < Dim; i++)
		{
			for (int j = 0; j < Dim; j++)
			{
				auto R = Ps[i][j];
				if (R!= nullptr)
				{
					if (R->GetSymbol() == 'R')
					{
						if (flage == false)
						{
							r1.ri = i;
							r1.ci = j;
							flage = true;
						}
						if (flage == true)
						{
							r2.ri = i;
							r2.ci = j;
						}
					}
				}
			}
		}

	}






}

void  Board::PromotionOfPawn(Piece*& P)
{
}
bool Board::CastlingPosible(Position S, Position D , Position& K, Position& R1, Position& R2 )
{

	if (Turn == White)
	{
		RookCordinate( R1, R2,White);
		K= KingCoordinates(White);
	
		if (D.ri == R1.ri && D.ci == R1.ci || D.ri == R2.ri && D.ci == R2.ci)
		{
			if (S.ri == K.ri && S.ci == K.ci)
			{
				if (Ps[R1.ri][R1.ci]->GetFirstTurn() == true && Ps[K.ri][K.ci]->GetFirstTurn() == true && !OWNKingCheck())
				{
					return true;
				}
				return false;
			}
			
		}
		

	}
	else
	{
		RookCordinate( R1, R2,Black);
		K = KingCoordinates(Black);
		
		if (D.ri == R1.ri && D.ci == R1.ci || D.ri == R2.ri && D.ci == R2.ci)
		{
			if (S.ri == K.ri && S.ci == K.ci)
			{
				if (Ps[R1.ri][R1.ci]->GetFirstTurn() == true && Ps[K.ri][K.ci]->GetFirstTurn() == true && !OWNKingCheck())
				{
					return true;
				}
				return false;
			}
			
		}
		
	}

}

bool Board::CASTLING(Position S, Position D, Position& K, Position& R1, Position& R2)
{

	int cDelta = abs(D.ci - S.ci);
	bool check = true;
	if (CastlingPosible(S, D, K, R1, R2))
	{
		UnHighlight(S);
		if (R1.ri == 0 || R2.ri == 0)
		{
			if (D.ri == R1.ri && D.ci == R1.ci)
			{
				for (int i = R1.ci + 1; i < K.ci; i++)
				{
					if (Ps[R1.ri][i] != nullptr)
					{
						return false;
					}
				}
				if (check == true)
				{
					if (cDelta == 4)
					{
						if (TemporaryPositionsChange(K, { 0,2 }))
						{
							PositionReplay(K, { 0,2 });
							PositionReplay(R1, { 0,3 });
						}
						else {
							return false;
						}

					}
				}
			}

			if (check == true)
			{
				if (cDelta == 3)
				{
					if (TemporaryPositionsChange(K, { 0,6 }))
					{
						PositionReplay(K, { 0,6 });
						PositionReplay(R2, { 0,5 });
					}
					
				}

			}
		}
	}
	else if (R1.ri == 7 || R2.ri == 7)
	{
		if (D.ri == R1.ri && D.ci == R1.ci)
		{
			for (int i = R1.ci + 1; i < K.ci; i++)
			{
				if (Ps[R1.ri][i] != nullptr)
				{
					return false;
				}
			}
			if (check == true)
			{
				if (cDelta == 4)
				{
					if (TemporaryPositionsChange(K, { 7,2 }))
					{
						PositionReplay(K, { 7,2 });
						PositionReplay(R1, { 7,3 });
					}
					else {
						return false;
					}
				}
			}
		}

		if (check == true)
		{
			if (cDelta == 3)
			{
				if (TemporaryPositionsChange(K, { 7,6 }))
				{
					PositionReplay(K, { 7,6 });
					PositionReplay(R2, { 7,5 });
				}

			}
		}

	}
	return true;
}

	




void Board::PlayerMove()
{
	COLOR ch;
	static vector <Position>Source; 
	static vector<Position>Destination;
	bool flage1 = true, flage2 = true;
	Position S, D;
	
    int x, y, a, b;
	bool Cflage = false;
	Board* Bs = new Board(p1, p2);
	int d, z;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 4);
	if (Turn == 0) 
	{
		
		do 
		{
			getRowColbyLeftClick(x, y); 
			if (x >= 80 && x < 90 && y >= 0 && y < 10)  
			{
				Replay(Source, Destination);
			}
			if (x >= 80 && x < 90 && y >= 10 && y < 20)
			{
				SaveData();
			}
			if (x >= 80 && x <= 90 && y >= 20 && y < 30)
			{
				LoadData();
			}
			
			S.ri = x;
			S.ci = y;
			if (Board::CheckInput(x, y) )
			{  if(Ps[x][y] != nullptr)
			{

				ch = Ps[x][y]->GetColor();
				if (SelfCheck(S))
				{
					if (!SelectedPieceSaveFromCheck(S))
					{
						flage1 = false;
					}

				}
				}
				if (Ps[x][y]==nullptr ||AnyLegalMove(S) == false || ch == White)
				{
					flage2 = false;
					gotoRowCol(80, 70);
					cout << "Invalid Piece";
					gotoRowCol(81, 70);
					cout << "Select Again!";
				}
				if (flage1 == true && flage2 == true)
				{
					Source.push_back(S);

					break;

				}
				else 
				{
					flage1 = true;
					flage2 = true;
				}

			}
		} while (true);
		do  
		{
			Bs = this;
			PathHighlight(S);
			getRowColbyLeftClick(a, b);
			a = a / 10;
			b = b / 10;
			D.ri = a;
			D.ci = b;
			if (Board::CheckInput(a, b))
			{
				
				
				if (CASTLING(S, D)) 
				{
					break;
				}
				if (Ps[a][b] != nullptr)
				{
					ch = Ps[a][b]->GetColor();
					if (Ps[x][y]->GetColor() == Ps[a][b]->GetColor())
					{
						Cflage = true;
						do 
						{
							PathHighlight(S);
							getRowColbyLeftClick(a, b);
							a = a / 10;
							b = b / 10;
							D.ri = a;
							D.ci = b;
							if (Ps[x][y]->GetColor() != Ps[a][b]->GetColor())
							{
								Cflage = false;
								break;
							}
						} while (true);
					}
				}
				if (OWNKingCheck())
				{
					if (!SelectedPieceSaveFromCheck(S, D))
					{
						flage1 = false;
					}
				}
				if (!Ps[x][y]->IsLegalMove(this, S, D) || SelfCheck(S, D) || Cflage == true )
				{
					flage2 = false;
		
					Cflage = false;
				}
				if (flage1 == true && flage2 == true)
				{
					Piece* BM = Ps[D.ri][D.ci]; 
					PosChange(S, D);
				
				}
				else
				{
					flage1 = true;
					flage2 = true;
				}
			}

		} while (true);
	}
	else if (Turn == Black)
	{
		gotoRowCol(40, 0);
		int x, y, a, b;
		do {
			getRowColbyLeftClick(x, y);
			if (x >= 80 && x < 90 && y >= 0 && y < 10)
			{
				Replay(Source, Destination);
			}
			if (x >= 80 && x < 90 && y >= 10 && y < 20)
			{
				SaveData();
			}
			if (x >= 80 && x <= 90 && y >= 20 && y < 30)
			{
				LoadData();
			}
			
			S.ri = x;
			S.ci = y;
			if (Board::CheckInput(x, y) && Ps[x][y] != nullptr)
			{
				ch = Ps[x][y]->GetColor();
				if (SelfCheck(S))
				{
					if (!SelectedPieceSaveFromCheck(S))
					{
						flage1 = false;
					}
					
				}
				if (Ps[x][y] == nullptr || AnyLegalMove(S) == false || ch == Black)
				{
					flage2 = false;
					gotoRowCol(5, 83);
					cout << "Invalid Piece Selection!";
					gotoRowCol(6, 83);
					cout << "Please Select Piece Again!";
				}
				if (flage1 == true && flage2 == true)
				{
					Source.push_back(S);

					break;
				}
				else {
					flage1 = true;
					flage2 = true;
				}

			}
		} while (true);
		do {
			Bs = this;
			
			getRowColbyLeftClick(a, b);
			a = a / 10;
			b = b / 10;
			D.ri = a;
			D.ci = b;
			if (Board::CheckInput(a, b))
			{
				if (Castling(S, D))
				{
					break;
				}
				if (Ps[a][b] != nullptr)
				{
					ch = Ps[a][b]->GetColor();
					if (Ps[x][y]->GetColor() == Ps[a][b]->GetColor())
					{
						Cflage = true;
						do {
							PathHighlight(S);
							getRowColbyLeftClick(a, b);
							
							D.ri = a;
							D.ci = b;
							if (Ps[x][y]->GetColor() != Ps[a][b]->GetColor())
							{
								Cflage = false;
								break;
							}
						} while (true);
					}

				}
				if (OWNKingCheck())
				{
					if (!SelectedPieceSaveFromCheck(S, D))
					{
						flage1 = false;
					}
				}
				if (!Ps[x][y]->IsLegalMove(this, S, D)|| SelfCheck(S, D) || Cflage == true)
				{
					flage2 = false;
					
					Cflage = false;;
				}
				if (flage1 == true && flage2 == true)
				{
					Piece* HM = Ps[D.ri][D.ci];
					PosChange(S, D);
					
					
					
					
					
				}
				else {
					flage1 = true;
					flage2 = true;
				}
			}

		} while (true);
		
	}

}

Piece* Board::GetPiece(int r, int c)
{
	if (Board::CheckInput(r, c))
	{
		return Ps[r][c];
	}
}
void gotoRowCol(int rpos, int cpos)
{
	COORD scrn;
	HANDLE hOuput = GetStdHandle(STD_OUTPUT_HANDLE);
	scrn.X = cpos;
	scrn.Y = rpos;
	SetConsoleCursorPosition(hOuput, scrn);
}

void getRowColbyLeftClick(int& rpos, int& cpos)
{
	HANDLE hInput = GetStdHandle(STD_INPUT_HANDLE);
	DWORD Events;
	INPUT_RECORD InputRecord;
	SetConsoleMode(hInput, ENABLE_PROCESSED_INPUT | ENABLE_MOUSE_INPUT | ENABLE_EXTENDED_FLAGS);
	do
	{
		ReadConsoleInput(hInput, &InputRecord, 1, &Events);
		if (InputRecord.Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED)
		{
			cpos = InputRecord.Event.MouseEvent.dwMousePosition.X;
			rpos = InputRecord.Event.MouseEvent.dwMousePosition.Y;
			break;
		}
	} while (true);
}
