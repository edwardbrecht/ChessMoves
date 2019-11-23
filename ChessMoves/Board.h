// Edward Brecht
// 11/22/2019

#pragma once
#include <array>
#include "ChessPiece.h"

const int BOARD_COLUMNS = 8;
const int BOARD_ROWS = 8;

enum Column {A = 0, B, C, D, E, F, G, H};

class Board
{
public:
	Board();
	~Board();

	void AddPiece(Column col, int row, char piece);
	void ClearBoard();

private:
	std::array<std::array<ChessPiece*, BOARD_COLUMNS>, BOARD_ROWS> m_board;
};

