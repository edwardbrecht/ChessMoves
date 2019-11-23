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

