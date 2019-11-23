#pragma once
#include "ChessPiece.h"
class WhiteRook :
	public ChessPiece
{
public:
	WhiteRook();
	virtual ~WhiteRook();

	virtual void move() override;
};

