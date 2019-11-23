// Edward Brecht
// 11/22/2019

#pragma once
#include "ChessPiece.h"
class BlackKing :
	public ChessPiece
{
public:
	BlackKing();
	virtual ~BlackKing();

	virtual void move() override;
};

