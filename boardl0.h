#ifndef __BOARD_L0__
#define __BOARD_L0__

#include "board.h"

class BoardL0 : public Board {

	int scoreNeeded;

	public:
	
	BoardL0();
	~BoardL0();

	void constructBoard();
	Square *getSquare(int r, int c);
	int getScoreNeeded();

};


#endif
