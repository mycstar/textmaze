#ifndef MAP_PIECE_HPP
#define MAP_PIECE_HPP

#include <string>
using namespace std;

class MapPiece {
	MapPiece *left {nullptr};
	MapPiece *right {nullptr};
	MapPiece *up {nullptr};
	MapPiece *down {nullptr};
public:
	string enterTxt;
	string exitTxt;
	string blockTxt;
	MapPiece (string enterTxt, string exitTxt, string blockTxt);
	MapPiece& setLeft (MapPiece &p);
	MapPiece& setRight (MapPiece &p);
	MapPiece& setUp (MapPiece &p);
	MapPiece& setDown (MapPiece &p);
	// getters
	MapPiece* getLeft ();
	MapPiece* getRight ();
	MapPiece* getUp ();
	MapPiece* getDown ();
	
	bool operator==(const MapPiece &another);
};
#endif
