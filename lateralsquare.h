#ifndef __LATERALSQUARE_H__
#define __LATERALSQUARE_H__
#include "square.h"

class LateralSquare: public Square{
	
	public:
	~LateralSquare();
	int getColour();
	int getRow();
	int getCol();
	int getType();
	void notify();
};

#endif	