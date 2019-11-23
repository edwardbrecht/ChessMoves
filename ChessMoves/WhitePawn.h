// Edward Brecht
// 11/22/2019

#pragma once
#include "ChessPiece.h"
class WhitePawn :
	public ChessPiece
{
public:
	WhitePawn();
	virtual ~WhitePawn();

	virtual void move() override;
};

