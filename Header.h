#pragma once

#include<iostream>
#include<Windows.h>
using namespace std;
struct Position {
	int ri;
	int ci;
};
enum COLOR { White, Black };
void gotoRowCol(int rpos, int cpos);
void getRowColbyLeftClick(int& rpos, int& cpos);


