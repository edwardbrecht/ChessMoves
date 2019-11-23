#pragma once
#include "ChessPiece.h"
class BlackKnight :
	public ChessPiece
{
public:
	BlackKnight();
	virtual ~BlackKnight();

	virtual void move() override;
};

