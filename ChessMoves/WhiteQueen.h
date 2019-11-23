#pragma once
#include "ChessPiece.h"
class WhiteQueen :
	public ChessPiece
{
public:
	WhiteQueen();
	virtual ~WhiteQueen();

	virtual void move() override;
};

