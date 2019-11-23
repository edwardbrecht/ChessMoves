// Edward Brecht
// 11/22/2019

#pragma once
#include "ChessPiece.h"
class BlackBishop :
	public ChessPiece
{
public:
	BlackBishop();
	virtual ~BlackBishop();

	virtual void move() override;
};

