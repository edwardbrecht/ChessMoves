// Edward Brecht
// 11/22/2019

#pragma once
#include "ChessPiece.h"
class WhiteKnight :
	public ChessPiece
{
public:
	WhiteKnight();
	virtual ~WhiteKnight();

	virtual void move() override;
};

