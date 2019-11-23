#pragma once

enum  Color {WHITE, BLACK};

class ChessPiece
{
public:
	ChessPiece();
	virtual ~ChessPiece();

	virtual void move() = 0;

	char getToken() const;

private:
	Color m_color;
	char m_token;
};

