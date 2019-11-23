// Edward Brecht
// 11/22/2019

#pragma once
#include "ChessPiece.h"
class BlackPawn :
	public ChessPiece
{
public:
	BlackPawn();
	virtual ~BlackPawn();

	virtual void move() override;
};

