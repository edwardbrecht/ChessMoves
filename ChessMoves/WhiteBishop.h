// Edward Brecht
// 11/22/2019

#pragma once
#include "ChessPiece.h"
class WhiteBishop :
	public ChessPiece
{
public:
	WhiteBishop();
	virtual ~WhiteBishop();

	virtual void move() override;
};

