#pragma once
#include "ChessPiece.h"
class WhiteKing :
	public ChessPiece
{
public:
	WhiteKing();
	virtual ~WhiteKing();

	virtual void move() override;
};

