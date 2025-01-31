#include "MapPiece.hpp"
#include "Player.hpp"
#include <iostream>

Player::Player (MapPiece &current, MapPiece &aim): location{current}, goal{aim} {}
void Player::moveBasedOn(int option) {
	MapPiece *next;
	if (option == 1) {
		next = location.getLeft();
	} else if (option == 2) {
		next = location.getRight();
	} else if (option == 3) {
		next = location.getUp();
	} else if (option == 4) {
		next = location.getDown();
	} 
	if (next != nullptr) {
		cout << location.exitTxt << endl;
		cout << next->enterTxt << endl;
		location = *next;
	} else {
		cout << location.blockTxt << endl;
	}
}
bool Player::isWin() {
	return location == goal;
}


