#ifndef PLAYER_HPP
#define PLAYER_HPP
#include "MapPiece.hpp"
#include <iostream>

class Player {
	MapPiece &location;
	MapPiece &goal;
public:
	Player (MapPiece &current, MapPiece &aim);
	void moveBasedOn(int option);
	bool isWin();
};
#endif
