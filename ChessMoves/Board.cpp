// Edward Brecht
// 11/22/2019

#include "Board.h"
#include "WhiteKing.h"
#include "BlackKing.h"
#include "WhiteQueen.h"
#include "BlackQueen.h"
#include "WhiteRook.h"
#include "BlackRook.h"
#include "WhiteKnight.h"
#include "BlackKnight.h"
#include "WhiteBishop.h"
#include "BlackBishop.h"
#include "WhitePawn.h"
#include "BlackPawn.h"



Board::Board()
{
}


Board::~Board()
{
}

void Board::AddPiece(Column col, int row, char piece)
{
	row -= 1;
	
	if (m_board[col][row] != nullptr)
	{
		delete m_board[col][row];
	}
	
	switch (piece)
	{
	case 'K' :
		m_board[col][row] = new WhiteKing;
		break;
	case 'k' :
		m_board[col][row] = new BlackKing;
		break;
	case 'Q' :
		m_board[col][row] = new WhiteQueen;
		break;
	case 'q' :
		m_board[col][row] = new BlackQueen;
		break;
	case 'R' :
		m_board[col][row] = new WhiteRook;
		break;
	case 'r' :
		m_board[col][row] = new BlackRook;
		break;
	case 'N' :
		m_board[col][row] = new WhiteKnight;
		break;
	case 'n' :
		m_board[col][row] = new BlackKnight;
		break;
	case 'B' :
		m_board[col][row] = new WhiteBishop;
		break;
	case 'b' :
		m_board[col][row] = new BlackBishop;
		break;
	case 'P' : 
		m_board[col][row] = new WhitePawn;
		break;
	case 'p' :
		m_board[col][row] = new BlackPawn;
		break;
	}
	return;
}

void Board::ClearBoard()
{
	for (size_t col = 0; col < BOARD_COLUMNS; col++)
	{
		for (size_t row = 0; row < BOARD_ROWS; row++)
		{
			if (m_board[col][row] != nullptr)
			{
				delete m_board[col][row];
			}
		}
	}
}