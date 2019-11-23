// Edward Brecht
// 11/22/2019

#pragma once
#include "ChessPiece.h"
class BlackRook :
	public ChessPiece
{
public:
	BlackRook();
	virtual ~BlackRook();

	virtual void move() override;
};

