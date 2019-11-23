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

