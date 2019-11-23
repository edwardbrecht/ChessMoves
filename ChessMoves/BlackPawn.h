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

