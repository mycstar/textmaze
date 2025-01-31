#include <string>
#include "MapPiece.hpp"
using namespace std;

MapPiece::MapPiece (string enterTxt, string exitTxt, string blockTxt)
: enterTxt{enterTxt}, exitTxt{exitTxt}, blockTxt{blockTxt} {}

MapPiece& MapPiece::setLeft (MapPiece &p) {
	left = &p;
	return *this;
}
MapPiece& MapPiece::setRight (MapPiece &p) {
	right = &p;
	return *this;
}
MapPiece& MapPiece::setUp (MapPiece &p) {
	up = &p;
	return *this;
}
MapPiece& MapPiece::setDown (MapPiece &p) {
	down = &p;
	return *this;
}
// getters
MapPiece* MapPiece::getLeft () { return left; }
MapPiece* MapPiece::getRight () { return right; }
MapPiece* MapPiece::getUp () { return up; }
MapPiece* MapPiece::getDown () { return down; }

bool MapPiece::operator==(const MapPiece &another) {
	return &another == this;
}

