// Edward Brecht
// 11/22/2019

#pragma once
#include "ChessPiece.h"
class BlackQueen :
	public ChessPiece
{
public:
	BlackQueen();
	virtual ~BlackQueen();

	virtual void move() override;
};

