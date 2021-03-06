//
//	Rook - handles move generation for the rook piece
//

#pragma once
#include "Piece.h"
#include <iostream>

class Rook : public Piece {
private:

public:
	//constructors
	Rook();

	//movement functions
	void UpdateValidMoves(const int a_size, Piece* a_pieces[]);
	void ValidMovesAt(std::string a_pos, Piece* a_pieces[], const int a_size, std::vector<std::string>& a_moves);
	void AddStraightMoves(std::string a_pos, Piece* a_pieces[], const int a_size, std::vector<std::string>& a_moves);
};